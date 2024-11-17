#include <iostream>

int main() {
    double A, B, C;
    std::cout << "Введіть довжину паралелепіпеда (A): ";
    std::cin >> A;
    std::cout << "Введіть ширину паралелепіпеда (B): ";
    std::cin >> B;
    std::cout << "Введіть висоту паралелепіпеда (C): ";
    std::cin >> C;
    double surfaceArea = 2 * (A * B + B * C + A * C);
    double volume = A * B * C;
    std::cout << "Площа поверхні паралелепіпеда: " << surfaceArea << std::endl;
    std::cout << "Об'єм паралелепіпеда: " << volume << std::endl;

    return 0;
}

