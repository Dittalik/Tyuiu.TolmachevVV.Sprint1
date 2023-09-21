// Tyuiu.TolmachevVV.Sprint1.Task3.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

using namespace std;

class Service1 :public ISprint1Task3V0
{
	virtual int Uslovie(int a) override
	{
		string sa = to_string(a);
		if (sa.length() == 4 && a % 2 == 0 && a != 1000 && a % 4 == 0)
		{
			return a * 2;
		}
		else
		{
			return a / 5;
		}
	}
};