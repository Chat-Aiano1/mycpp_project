#include <iostream>
#include <iomanip>

int main() {
    double num1, num2;
    std::cout << "Введіть перше число: ";
    std::cin >> num1;
    std::cout << "Введіть друге число: ";
    std::cin >> num2;
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num2 != 0 ? num1 / num2 : 0;

    std::cout << std::fixed << std::setprecision(12);
    std::cout << "Сума: " << sum << std::endl;
    std::cout << "Різниця: " << difference << std::endl;
    std::cout << "Добуток: " << product << std::endl;

    if (num2 != 0) {
        std::cout << "Частка: " << quotient << std::endl;
    } else {
        std::cout << "Частка: Неможливо поділити на нуль" << std::endl;
    }

    return 0;
}

