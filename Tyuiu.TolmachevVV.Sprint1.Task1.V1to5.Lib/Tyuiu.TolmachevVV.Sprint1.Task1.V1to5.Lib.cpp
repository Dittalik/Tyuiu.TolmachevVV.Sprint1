// Tyuiu.TolmachevVV.Sprint1.Task1.V1to5.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class ServiceV1 :public ISprint1Task1
{
	virtual int Logic(int a)
	{
		if (a % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV2 :public ISprint1Task1
{
	virtual int Logic(int a)
	{
		if (a % 13 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV3 :public ISprint1Task1
{
	virtual int Logic(int a)
	{
		if (a % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV4 :public ISprint1Task1
{
	virtual int Logic(int a)
	{
		if (a % 10 == 7)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV5 :public ISprint1Task1
{
	virtual int Logic(int a)
	{
		if (a / 100 + (a / 10) % 10 + a % 10 > 10) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

