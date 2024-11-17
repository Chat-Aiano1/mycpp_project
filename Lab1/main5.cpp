#include <iostream>
#include <iomanip>

int main() {
    const double pi = 3.14; 
    double R;              /
    std::cout << "Введіть радіус круга (R): ";
    std::cin >> R;
    double area = pi * R * R;       
    double circumference = 2 * pi * R;  
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Площа круга: " << area << std::endl;
    std::cout << "Довжина кола: " << circumference << std::endl;

    return 0;
}

