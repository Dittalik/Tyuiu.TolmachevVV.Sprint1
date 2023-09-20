// Tyuiu.TolmachevVV.Sprint1.Task2.V1-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint1.Task2.V1-5.Lib/Tyuiu.TolmachevVV.Sprint1.Task2.V1-5.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint1Task2* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task2.V1\n";
    std::cout << std::endl;

  
    int a, A;
    cout << "Введите трёхзначное число: "; cin >> a;
    if (serviceV1->LogicLong(a))
    {
        cout << "Произведение цифр числа " << a << " является трёзначным числом и равно: " << a / 100 * (a / 10) % 10 * a % 10;
    }
    else
    {
        cout << "Произведение цифр числа " << a << "  не является трёзначным числом и равно: " << a / 100 * (a / 10) % 10 * a % 10;
    }

    ISprint1Task2* serviceV2 = new ServiceV2();
    std::cout << std::endl;
    std::cout << "Task2.V2\n";
    std::cout << std::endl;
    cout << "Введите четырехзначное число: "; cin >> a;
    if (serviceV2->LogicLong(a))
    {
        cout << "Сумма цифр числа " << a << " является кратным числу 5 и равна: " << (((int(a / 1000) + int((a / 100) % 10)) + int((a / 10) % 10 + int(a % 10))));
    }
    else
    {
        cout << "Сумма цифр числа " << a << " не является кратным числу 5 и равна: " << (((int(a / 1000) + int((a / 100) % 10)) + int((a / 10) % 10 + int(a % 10))));
    }
    ISprint1Task2* serviceV3 = new ServiceV3();
    std::cout << std::endl;
    std::cout << "Task2.V3\n";
    std::cout << std::endl;
    cout << "Введите трехзначное число: "; cin >> a;
    cout << "Введите число A: "; cin >> A;
    if (serviceV3->LogicLong(a) % A == 0)
    {
        cout << "Сумма цифр числа " << a << " кратна числу " << A;
    }
    else
    {
        cout << "Сумма цифр числа " << a << " не кратна числу " << A;
    }
    ISprint1Task2* serviceV4 = new ServiceV4();
    std::cout << std::endl;
    std::cout << "Task2.V4\n";
    std::cout << std::endl;
    cout << "Введите трехзначное число: "; cin >> a;
    if (serviceV4->LogicLong(a))
    {
        cout << "Последняя цифра числа " << a << " является кратным числу 3";
    }
    else
    {
        cout << "Последняя цифра числа " << a << " не является кратным числу 3";
    }
    ISprint1Task2* serviceV5 = new ServiceV5();
    std::cout << std::endl;
    std::cout << "Task2.V5\n";
    std::cout << std::endl;
    cout << "Введите трехзначное число: "; cin >> a;
    cout << "Введите число A: "; cin >> A;
    if (serviceV5->LogicLong(a) > A)
    {
        cout << "Произведение цифр числа " << a << " является больше числа " << A;
    }
    else
    {
        cout << "Произведение цифр числа " << a << " является меньше числа " << A;
    }
}

