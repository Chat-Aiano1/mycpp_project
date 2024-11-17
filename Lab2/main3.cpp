#include <iostream>
#include <iomanip>

int main() {

    int num;
    std::cout << "Введіть ціле число: ";
    std::cin >> num;
    std::cout << "Число є парним: " << (num % 2 == 0 ? "ТАК" : "НІ") << std::endl;
    std::cout << "Число ділиться на 8: " << (num % 8 == 0 ? "ТАК" : "НІ") << std::endl;
    std::cout << "Число ділиться на 16: " << (num % 16 == 0 ? "ТАК" : "НІ") << std::endl;

    std::cout << "Число у вісімковому форматі: " << std::oct << num << std::endl;
    std::cout << "Число у шістнадцятковому форматі: 0x" << std::hex << std::uppercase << num << std::endl;

    return 0;
}

