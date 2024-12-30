#include <iostream>

// Задача №1

// Оголошення функції
double CircleS(double R) {
    const double PI = 3.14;
    return PI * R * R;
}

void calculateCircleAreas() {
    double radius;
    std::cout << "Введіть радіус кола: ";// Задайте тут ваші радіуси
    std::cin >> radius;
    std::cout << "Площа кола з радіусом " << radius << " дорівнює " << CircleS(radius) << std::endl;// Визначення функції
}



// Задача №2
// Оголошення функцій
bool isValidInput(int a, int b, int c);
bool hasOppositePair(int a, int b, int c);

// Головна функція
void checkOppositePairs() {
    int a, b, c;
    std::cout << "Введіть три цілі числа: ";
    std::cin >> a >> b >> c;

    if (!isValidInput(a, b, c)) {
        std::cout << "Некоректні вхідні дані!" << std::endl;
    } else {
        if (hasOppositePair(a, b, c)) {
            std::cout << "Серед чисел є хоча б одна пара взаємно протилежних." << std::endl;
        } else {
            std::cout << "Серед чисел немає пар взаємно протилежних." << std::endl;
        }
    }
}
// Визначення функцій
bool isValidInput(int a, int b, int c) {
    return a != b && a != c && b != c;
}
bool hasOppositePair(int a, int b, int c) {
     return (a == -b || a == -c || b == -c);
}

// Задача №3

// Оголошення функцій
bool isValidSecond(int N);
int calculateFullHours(int N);
void displayResult(int hours);

// Головна функція
void countFullHours() {
    int seconds;
    std::cout << "Введіть кількість секунд: ";
    std::cin >> seconds;

    if (seconds < 0) {
        std::cout << "Некоректні вхідні дані!" << std::endl;
    } else {
        int hours = seconds / 3600;
        std::cout << "Кількість повних годин: " << hours << std::endl;
    }
}

//Задача №4

int main() {
    int choice;
    do {
        std::cout << "Меню:\n";
        std::cout << "1. Обчислити площу кола\n";
        std::cout << "2. Перевірити наявність взаємно протилежних пар\n";
        std::cout << "3. Порахувати повні години з секунд\n";
        std::cout << "4. Вихід\n";
        std::cout << "Виберіть опцію: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                calculateCircleAreas();
                break;
            case 2:
                checkOppositePairs();
                break;
            case 3:
                countFullHours();
                break;
            case 4:
                std::cout << "Вихід з програми." << std::endl;
                break;
            default:
                std::cout << "Некоректний вибір. Спробуйте ще раз." << std::endl;
        }
    } while (choice != 4);

    return 0;
}