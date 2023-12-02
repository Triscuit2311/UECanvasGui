# UECanvasGui

UECanvasGuiis a sophisticated internal mod framework for Unreal Engine (versions 4 & 5). It leverages a post-render function hook to utilize the game's canvas rendering system for drawing. The framework is built using modern C++20 features, emphasizing efficient and streamlined game modding.

## Features
- **Modular Windows:** Create customizable windows containing various controls, complete with a heading. These windows can be easily moved around the screen using the cursor, which is also rendered by the framework.
- **Control Types:** 
  - **Toggles:** Manage boolean values (atomic).
  - **Sliders (Int & Float):** Control atomic integer and float values.
  - **Buttons:** Execute anonymous functions.
  - **Labels:** Display text.
  - **Empty Space & Separators:** Organize and separate sections within a window.
- **Styling:** Comes with modular style settings and sensible defaults, allowing for extensive customization.

## Usage Example
```cpp
Window window;

std::atomic<bool> toggled_1 = true;
std::atomic<bool> toggled_2 = false;

std::atomic<int> sliderIntValue = 4;
std::atomic<int> sliderIntValue2 = 4;
std::atomic<float> sliderFloatValue = 8.5f;
std::function<void()> test_func = []() { /* Button action */ };

window.init(L"Smoothie Machine");

window.add_control<Label>(L"Ingredients:");
window.add_control<Toggle>(L"Use Strawberry", toggled_1);
window.add_control<Toggle>(L"Use Banana", toggled_2);
window.add_control<IntSlider>(L"You have %d of blueberries", sliderIntValue, 0, 10);
window.add_control<Seperator>(L"");
window.add_control<IntSlider>(L"Power Setting: %d", sliderIntValue2, -30, 30);
window.add_control<FloatSlider>(L"Ice Amount: %.1f", sliderFloatValue, 0.0f, 20.0f);
window.add_control<Seperator>(L"");
window.add_control<Button>(L"Make Smoothie", test_func);
```

## License
[Licenced under the MIT License](LICENSE)
