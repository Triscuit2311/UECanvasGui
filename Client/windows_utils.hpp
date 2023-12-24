#pragma once


namespace windows_utils
{
	inline bool GetWindowRelativeCursorPos(POINT& point)
	{
		if (const HWND foreground_window = GetForegroundWindow();
			foreground_window == nullptr || !GetCursorPos(&point) || !ScreenToClient(foreground_window, &point)) {
			return false;
		}
		return true;
	}
}