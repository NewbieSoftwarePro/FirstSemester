
#include <iostream>
int main() {
    // Newline (\n)
    std::cout << "Line 1\nLine 2\n";

    // Tab (\t)
    std::cout << "Column 1\tColumn 2\n";

    // Carriage return (\r)
    std::cout << "Overwrite this line with\rThis is a new line\n";

    // Backspace (\b)
    std::cout << "12345\bX\n";

    // Alert (\a) - Depending on the environment, this may produce a sound
    std::cout << "Alert\aBeep!\n";

    // Form feed (\f) - The effect might vary in different environments
    std::cout << "Page 1\fPage 2\n";

    // Vertical tab (\v) - The effect might vary in different environments
    std::cout << "Vertical\vTab\n";

    // Double quote (\") and single quote (\')
    std::cout << "Double quote: \"\n";
    std::cout << "Single quote: \'\n";

    // Backslash (\\)
    std::cout << "Backslash: \\\n";

    return 0;
}

