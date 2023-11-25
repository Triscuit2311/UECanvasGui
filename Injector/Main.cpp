// Injector
#include "Injector.h"
#include "Seh.h"
#include "StringWrap.h"
#include "StringUtil.h"

// C++ Standard Library
#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <random>

// Return values
#define RESULT_SUCCESS          0
#define RESULT_INVALID_COMMAND  1
#define RESULT_GENERAL_ERROR    2
#define RESULT_SEH_ERROR        3
#define RESULT_UNKNOWN_ERROR    4

std::wstring generateRandomWString(size_t length) {
    static std::wstring alphabet = L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static std::mt19937 mt(std::random_device{}());
    static std::uniform_int_distribution<size_t> dist(0, alphabet.length() - 1);

    std::wstring result;
    result.reserve(length);

    for (size_t i = 0; i < length; ++i) {
        result.push_back(alphabet[dist(mt)]);
    }

    return result;
}

std::wstring create_temp(const std::wstring& originalPath) {
    size_t lastDotPos = originalPath.find_last_of(L"\\");

    std::wstring copyPath = (lastDotPos == std::wstring::npos) ?
        (originalPath + generateRandomWString(10)) :
        (originalPath.substr(0, lastDotPos+1) + generateRandomWString(10) + L".dll");
    std::ifstream inFile(originalPath, std::ios::binary);
    std::ofstream outFile(copyPath, std::ios::binary);
    if (!inFile || !outFile) throw std::runtime_error("File operation failed.");
    outFile << inFile.rdbuf();
    return copyPath;
}


// Entry point
int main()
{
    try
    {
		SehGuard Guard;
        std::string procName = "ReadyOrNot-Win64-Shipping.exe";
        std::wstring modName = L"Client.dll";

        auto ProcID = Injector::Get()->GetProcessIdByName(utf8_to_wstr(toLower(procName)));

        Injector::Get()->GetSeDebugPrivilege();

        auto modPath = Injector::Get()->GetPath(modName);


    	Injector::Get()->InjectLib(ProcID, modPath);
        // If we get to this point then no exceptions have been thrown so we
        // assume success.
        std::tcout << "Successfully injected module!" << std::endl;

    }
    // Catch STL-based exceptions.
    catch (const std::exception& e)
    {
        std::string TempError(e.what());
        std::tstring Error(TempError.begin(), TempError.end());
        std::tcerr << "General Error:" << std::endl
            << Error << std::endl;


        return RESULT_GENERAL_ERROR;

    }

    // Catch custom SEH-proxy exceptions.
    // Currently only supports outputting error code.
    // TODO: Convert to string and dump more verbose output.
    catch (const SehException& e)
    {
        std::tcerr << "SEH Error:" << std::endl
            << e.GetCode() << std::endl;

        return RESULT_SEH_ERROR;
    }

    // Catch any other unknown exceptions.
    // TODO: Find a better way to handle this. Should never happen anyway, but
    // you never know.
    // Note: Could use SetUnhandledExceptionFilter but would potentially be 
    // messy.
    catch (...)
    {
        std::tcerr << "Unknown error!" << std::endl;

        return RESULT_UNKNOWN_ERROR;
    }

    // Return success
    return RESULT_SUCCESS;
}
