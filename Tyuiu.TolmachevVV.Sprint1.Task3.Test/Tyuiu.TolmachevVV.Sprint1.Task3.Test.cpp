#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint1.Task3.Lib/Tyuiu.TolmachevVV.Sprint1.Task3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint1Task3Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint1Task3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task3V0* service1 = new Service1();
			int a = 2000;
			int b = 1000;
			int c = 100;
			Assert::IsTrue(service1->Uslovie(a) == 4000 && service1->Uslovie(b) == 200 && service1->Uslovie(c) == 20);
		}
	};
}
