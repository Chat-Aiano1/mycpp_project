#include <iostream>
#include <iomanip>

int main() {
    char ch;
    std::cout << "Введіть символ: ";
    std::cin >> ch;
    std::cout << "Символ: " << ch << std::endl;
    std::cout << "ASCII-код (десятковий): " << static_cast<int>(ch) << std::endl;
    std::cout << "ASCII-код (шістнадцятковий): 0x" 
              << std::hex << std::uppercase << static_cast<int>(ch) << std::endl;

    return 0;
}

