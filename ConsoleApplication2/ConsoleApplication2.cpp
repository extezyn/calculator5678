#include <iostream>
#include <cmath>
int main()
{   
    setlocale(LC_ALL, "RUS");

    std::cout << "Добро пожаловать в калькулятор\n1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Возведение в степень\n6.Нахождения квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы.\n";
    std::cout << "Введите номер поерации (от 1 до 9): ";
    int znak;
    std::cin >> znak;
    
    int num1;
    int num2;
    int zxc = 1;
    switch (znak)
    {
    case 1:
        std::cout << "Введите 1ое число: ";
        std::cin >> num1;
        std::cout << "Введите 2ое число: ";
        std::cin >> num2;
        std::cout << num1 + num2;
        break;
    
    case 2:
        std::cout << "Введите 1ое число: ";
        std::cin >> num1;
        std::cout << "Введите 2ое число: ";
        std::cin >> num2;
        std::cout << num1 - num2;
        break;

    case 3:
        std::cout << "Введите 1ое число: ";
        std::cin >> num1;
        std::cout << "Введите 2ое число: ";
        std::cin >> num2;
        std::cout << num1 * num2;
        break;

    case 4:
        std::cout << "Введите 1ое число: ";
        std::cin >> num1;
        std::cout << "Введите 2ое число: ";
        std::cin >> num2;
        if (num2 != 0)
            std::cout << num1 / num2;
        else
            std::cout << "на 0 делить нельзя";
        break;

    case 5:
        std::cout << "Введите число: ";
        std::cin >> num1;
        std::cout << "Введите показатель степени";
        std::cin >> num2;
        std::cout << pow(num1,num2);
        break;

    case 6:
        std::cout << "Введите число: ";
        std::cin >> num1;
        std::cout << sqrt(num1);
        break;

    case 7:
        std::cout << "Введите число: ";
        float pip;
        std::cin >> pip;
        std::cout << pip / 100;
        break;

    case 8:
        std::cout << "Введите число: ";
        std::cin >> num1;
        for (int i = 1; i<=num1; i++){
            zxc *= i;
        }
        std::cout << zxc;
    case 9:
        break;

    default:
        std::cout << "Incorrect number";
        break;
    }
}
