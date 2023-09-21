// Tyuiu.TolmachevVV.Sprint1.Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "../Tyuiu.TolmachevVV.Sprint1.Task3.Lib/Tyuiu.TolmachevVV.Sprint1.Task3.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint1Task3V0* serviceV1 = new Service1();
    std::cout << "Tolmachev\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task3.\n";
    std::cout << std::endl;

    int a;
    cout << "Введите число: "; cin >> a;
    cout << "Результат: " << serviceV1->Uslovie(a);
    std::cout << std::endl;
    cout << "Введите число: "; cin >> a;
    cout << "Результат: " << serviceV1->Uslovie(a);
    std::cout << std::endl;
    cout << "Введите число: "; cin >> a;
    cout << "Результат: " << serviceV1->Uslovie(a);
}
