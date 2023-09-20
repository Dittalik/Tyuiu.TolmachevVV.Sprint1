#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class ServiceV1 :public ISprint1Task2
{
	virtual int LogicLong(int a)
	{
		if (int(a / 100) * int((a / 10) % 10) * int(a % 10) >= 100 )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV2 :public ISprint1Task2
{
	virtual int LogicLong(int a) override
	{
		if (((int(a / 1000) + int((a / 100) % 10)) + int((a / 10) % 10 + int(a % 10))) % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV3 :public ISprint1Task2
{
	virtual int LogicLong(int a)
	{
		return a / 100 + (a / 10) % 10 + a % 10;
	}
};
class ServiceV4 :public ISprint1Task2
{
	virtual int LogicLong(int a)
	{
		if ((a % 10) % 3 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class ServiceV5 :public ISprint1Task2
{
	virtual int LogicLong(int a)
	{
		return int(a / 100) * int((a / 10) % 10) * int(a % 10);
	}
};
