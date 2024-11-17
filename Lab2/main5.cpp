#include <iostream>
#include <iomanip> 

int main() {
    double score; 

    std::cout << "Введіть кількість балів (0,0 ... 9,0): ";
    std::cin >> score;

    if (score < 0.0 || score > 9.0) {
        std::cout << "Помилка: число поза діапазоном!" << std::endl;
        return 1;
    }

    if (score >= 0.0 && score <= 4.4) {
        std::cout << "Оцінка: незадовільна (2,0)" << std::endl;
    } else if (score >= 4.5 && score <= 5.2) {
        std::cout << "Оцінка: задовільна (3,0)" << std::endl;
    } else if (score >= 5.3 && score <= 6.2) {
        std::cout << "Оцінка: вище задовільно (3,5)" << std::endl;
    } else if (score >= 6.3 && score <= 7.2) {
        std::cout << "Оцінка: хороша (4,0)" << std::endl;
    } else {
        std::cout << "Оцінка: Вищий за задані межі результат!" << std::endl;
    }

    return 0;
}

