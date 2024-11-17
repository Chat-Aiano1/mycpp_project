#include <iostream>
#include <iomanip> 

int main() {
    int option;    
    double temp;   


    std::cout << "Оберіть варіант:\n";
    std::cout << "1 - Цельсій у Фаренгейт\n";
    std::cout << "2 - Фаренгейт у Цельсій\n";
    std::cout << "Ваш вибір: ";
    std::cin >> option;

    std::cout << "Введіть температуру: ";
    std::cin >> temp;


    if ((option == 1 && temp < -273.15) || (option == 2 && temp < -459.67)) {
        std::cout << "Занадто холодно для підрахунку!" << std::endl;
        return 0;
    }

    double result;
    if (option == 1) {
        result = (temp * 9.0 / 5.0) + 32.0;
        std::cout << "Результат: " << std::fixed << std::setprecision(2)
                  << result << " °F" << std::endl;
    } else if (option == 2) {
        result = (temp - 32.0) * 5.0 / 9.0;
        std::cout << "Результат: " << std::fixed << std::setprecision(2)
                  << result << " °C" << std::endl;
    } else {
        std::cout << "Невірний варіант!" << std::endl;
    }

    return 0;
}

