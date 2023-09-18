#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint1.Task1.V1-5.Lib/Tyuiu.TolmachevVV.Sprint1.Task0.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint1Task0V15Tests
{
	TEST_CLASS(TyuiuTolmachevVVSprint1Task0V15Tests)
	{
	public:
		
		TEST_METHOD(TestV1)
		{
			ISprint1Task0V01* service1 = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			Assert::AreEqual(60, service1->Rezalt(a, b, c));
		};
		TEST_METHOD(TestV2)
		{
			ISprint1Task0V01* service2 = new Service2();
			int a = 3;
			int b = 4;
			int c = 5;
			Assert::AreEqual(70, service2->Rezalt(a, b, c));
		};
		TEST_METHOD(TestV3)
		{
			ISprint1Task0V00* service3 = new Service3();
			int a = 3;
			int b = 4;
			Assert::AreEqual(38, service3->Calculate(a, b));
		};
		TEST_METHOD(TestV4)
		{
			ISprint1Task0V00* service4 = new Service4();
			int a = 3;
			int b = 4;
			Assert::AreEqual(14, service4->Calculate(a, b));
		};
		TEST_METHOD(TestV5)
		{
			ISprint1Task0V01* service5 = new Service5();
			int a = 3;
			int b = 4;
			int c = 5;
			Assert::AreEqual(4, service5->Rezalt(a, b, c));
		}
	};
}
