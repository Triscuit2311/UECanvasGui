#pragma once
#include <windows.h>
#include <cstdio>
#include <sstream>


#define USE_CONSOLE true


class ConsoleLogger {
public:
    ConsoleLogger(): console_hdl(nullptr), console_saved_attrs(0)
    {
    }

    void init()
    {
        if constexpr (USE_CONSOLE) {
            AllocConsole();
            freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
            //system("chcp 437");
            console_use_ansi = enable_virtual_terminal_processing();
            CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
            GetConsoleScreenBufferInfo(console_hdl, &consoleInfo);
            console_saved_attrs = consoleInfo.wAttributes;
            logSpecial("Console Allocated");
        }
    }

    ~ConsoleLogger() {
        if constexpr (USE_CONSOLE) {
            logSpecial("Console Freed");
            FreeConsole();
        }
    }

    void free(){
        if constexpr (USE_CONSOLE) {
            logSpecial("Console Freed");
            FreeConsole();
        }
    }


    template<typename... Args>
    void log(const char* format, Args... args) {
        log_with_color("+", FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY, format, args...);
    }

    template<typename... Args>
    void info(const char* format, Args... args) {
        log_with_color("i", FOREGROUND_GREEN | FOREGROUND_INTENSITY, format, args...);
    }

    template<typename... Args>
    void error(const char* format, Args... args) {
        log_with_color("x", FOREGROUND_RED | FOREGROUND_INTENSITY, format, args...);
    }

    template<typename... Args>
    void logSpecial(const char* format, Args... args) {
        log_with_color("~", FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY, format, args...);
    }

    template<typename T, typename... Args>
    void logNull(T* ptr, const char* format, Args... args) {
        std::ostringstream messageStream;
        messageStream << (ptr == nullptr ? "NULLPTR: " : "VALID PTR: ") << format;
        std::string message = messageStream.str();

        if (ptr == nullptr) {
            error(message.c_str(), args...);
        }
        else {
            info(message.c_str(), args...);
        }
    }

private:
    HANDLE console_hdl;
    WORD console_saved_attrs;
    bool console_use_ansi = false;

    bool enable_virtual_terminal_processing() {
        console_hdl = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD mode;
        if (!GetConsoleMode(console_hdl, &mode)) {
            return false;
        }
        mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        return SetConsoleMode(console_hdl, mode);
    }

    template<typename... Args>
    void log_with_color(const char* prefix, WORD color, const char* format, Args... args) {
        if (console_use_ansi) {
            const char* colorCode = get_color_code(color);
            printf("%s %s %c ", colorCode, prefix, 16);
            printf("\x1B[0m");
            printf(format, args...);
            printf("\n");

        }
        else {
            SetConsoleTextAttribute(console_hdl, color);
            printf("%s ", prefix);
            SetConsoleTextAttribute(console_hdl, console_saved_attrs);
            printf(format, args...);
            printf("\n");
        }
    }

    static const char* get_color_code(WORD color) {
        // Mapping Windows console colors to ANSI escape codes
        switch (color) {
        case FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY:
            return "\x1B[1;93m"; // Yellow
        case FOREGROUND_GREEN | FOREGROUND_INTENSITY:
            return "\x1B[1;92m"; // Bright Green
        case FOREGROUND_RED | FOREGROUND_INTENSITY:
            return "\x1B[1;91m"; // Bright Red
        case FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY:
            return "\x1B[1;96m"; // Bright Cyan
        default:
            return "\x1B[0;37m"; // Default (White)
        }
    }

};

// Global logger instance
inline ConsoleLogger global_logger;

// Macros
#define INIT_CONSOLE(...) (global_logger.init())
#define LOG(...) global_logger.log(__VA_ARGS__)
#define INF(...) global_logger.info(__VA_ARGS__)
#define ERR(...) global_logger.error(__VA_ARGS__)
#define SPE(...) global_logger.logSpecial(__VA_ARGS__)
#define EXIT_CONSOLE(...) global_logger.free()
#define LOGNULL(ptr, ...) global_logger.logNull(ptr, __VA_ARGS__)

#define VARLOG_F(var) LOG("%s: %.8f", #var, var)
#define VARLOG_D(var) LOG("%s: %d", #var, var)
#define VARLOG_FVEC(var)LOG("%s: [%.8f, %.8f, %.8f]", #var, var.X, var.Y, var.Z)
#define VARLOG_FROT(var) LOG("%s: [%.8f, %.8f, %.8f]", #var, var.Yaw, var.Pitch, var.Roll)
