// Tyuiu.TolmachevVV.Sprint1.Task1.V1-5.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service1 :public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return a * b * c;
	}
};
class Service2 :public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return 2 * c * (a + b);
	}
};
class Service3 :public ISprint1Task0V00
{
	virtual int Calculate(int a, int b) override
	{
		return 2 * a + 2 * a * b + 2 * b;
	}
};
class Service4 :public ISprint1Task0V00
{
	virtual int Calculate(int a, int b) override
	{
		return 2 * a + 2 * b;
	}
};
class Service5 :public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return (a + b + c) / 3;
	}
};