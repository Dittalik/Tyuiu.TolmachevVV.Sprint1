// Tyuiu.TolmachevVV.Sprint1.Task1.V1-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint1.Task1.V1-5.Lib/Tyuiu.TolmachevVV.Sprint1.Task0.V1-5.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint1Task0V01* serviceV1 = new Service1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task0.V1\n";
    std::cout << std::endl;

    int a, b, c;
    std::cout << "Введите стороны параллелепипеда в следующем порядке : длина, ширина, высота ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Объем параллелепипеда с заданными размерами равен: " << serviceV1->Rezalt(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint1Task0V01* serviceV2 = new Service2();
    std::cout << "Task0.V2\n";
    std::cout << std::endl;
    std::cout << "Введите стороны параллелепипеда в следующем порядке : длина, ширина, высота ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Площадь боковой стороны параллелепипеда с заданными размерами равен: " << serviceV2->Rezalt(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint1Task0V00* serviceV3 = new Service3();
    std::cout << "Task0.V3\n";
    std::cout << std::endl;
    std::cout << "Введите два числа для вычисления суммы квадратов ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма квадратов данных чисел равна: " << serviceV3->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint1Task0V00* serviceV4 = new Service4();
    std::cout << "Task0.V4\n";
    std::cout << std::endl;
    std::cout << "Стороны прямоугольника для вычесления его площади ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Площадь прямоугольника равна: " << serviceV4->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint1Task0V01* serviceV5 = new Service5();
    std::cout << "Task0.V5\n";
    std::cout << std::endl;
    std::cout << "Введите три числа для вычисления их среднего значения ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Среднее значение данных чисел равно: " << serviceV5->Rezalt(a, b, c);

}


