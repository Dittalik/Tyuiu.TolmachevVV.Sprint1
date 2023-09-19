
#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint1.Task1.V1to5.Lib/Tyuiu.TolmachevVV.Sprint1.Task1.V1to5.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint1Task1* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task1.V1\n";
    std::cout << std::endl;
    
    int a;
    int p = 0;
    std::cout << "Введите первую сторону: "; std::cin >> a;
    if (serviceV1->Logic(a) != true)
    {
        p = + a;
        std::cout << "Введите вторую сторону: "; std::cin >> a;
        if (serviceV1->Logic(a) != true)
        {
            std::cout << "У данного прямоугольника нет сторон кратных 5";
        }
        else
        {
            std::cout << "Периметр данного прямоугольника равен: " << 2 * (p + a);
        }
    }
    else
    {
        p = + a;
        std::cout << "Введите вторую сторону: "; std::cin >> a;
        std::cout << "Периметр данного прямоугольника равен: " << 2 * (p + a);
    }
    ISprint1Task1* serviceV2 = new ServiceV2();
    std::cout << std::endl;
    std::cout << "Task1.V2\n";
    std::cout << std::endl;

    std::cout << "Введите число: "; std::cin >> a;
    if (serviceV2->Logic(a) == true)
    {
        std::cout << "Данное число делится на 13 результат равен: " << a / 13;
    }
    else
    {
        std::cout << "Данное число не делится на 13";
    }
    ISprint1Task1* serviceV3 = new ServiceV3();
    std::cout << std::endl;
    std::cout << "Task1.V3\n";
    std::cout << std::endl;
    std::cout << "Введите число: "; std::cin >> a;
    if (serviceV3->Logic(a) == true)
    {
        std::cout << "Данное число является четным";
    }
    else
    {
        std::cout << "Данное число не является четным";
    }
    ISprint1Task1* serviceV4 = new ServiceV4();
    std::cout << std::endl;
    std::cout << "Task1.V4\n";
    std::cout << std::endl;
    std::cout << "Введите число: "; std::cin >> a;
    if (serviceV4->Logic(a) == true)
    {
        std::cout << "Данное число оканчивается цифрой 7";
    }
    else
    {
        std::cout << "Данное число не оканчивается цифрой 7";
    }
    ISprint1Task1* serviceV5 = new ServiceV5();
    std::cout << std::endl;
    std::cout << "Task1.V5\n";
    std::cout << std::endl;
    std::cout << "Введите число: "; std::cin >> a;
    if (serviceV5->Logic(a) == true)
    {
        std::cout << "Сумма цифр данного числа является двухзначным числом и равна: " << int(a / 100) + int((a / 10) % 10) + int(a % 10);
    }
    else
    {
        std::cout << "Сумма цифр данного числа не является двухзначным числом и равна: " << int(a / 100) + int((a / 10) % 10) + int(a % 10);
    }
}

