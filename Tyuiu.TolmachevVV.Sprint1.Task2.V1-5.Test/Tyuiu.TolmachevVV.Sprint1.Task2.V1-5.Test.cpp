#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint1.Task2.V1-5.Lib/Tyuiu.TolmachevVV.Sprint1.Task2.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint1Task2V15Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint1Task2V15Test)
	{
	public:
		
		TEST_METHOD(TestV1)
		{
			ISprint1Task2* serviceV1 = new ServiceV1();
			int a = 123;
			int b = 999;
			Assert::IsTrue(!serviceV1->LogicLong(a) && serviceV1->LogicLong(b));
		}
		TEST_METHOD(TestV2)
		{
			ISprint1Task2* serviceV2 = new ServiceV2();
			int a = 1232;
			int b = 1234;
			Assert::IsTrue(!serviceV2->LogicLong(a) && serviceV2->LogicLong(b));
		}
		TEST_METHOD(TestV3)
		{
			ISprint1Task2* serviceV3 = new ServiceV3();
			int a = 123;
			int b = 124;
			int A = 6;
			Assert::IsTrue(serviceV3->LogicLong(a) % A == 0  && !serviceV3->LogicLong(b) % A == 0);
		}
		TEST_METHOD(TestV4)
		{
			ISprint1Task2* serviceV4 = new ServiceV4();
			int a = 123;
			int b = 991;
			Assert::IsTrue(serviceV4->LogicLong(a) && !serviceV4->LogicLong(b));
		}
		TEST_METHOD(TestV5)
		{
			ISprint1Task2* serviceV5 = new ServiceV5();
			int a = 123;
			int b = 124;
			int A = 7;
			Assert::IsTrue(!(serviceV5->LogicLong(a) > A) && serviceV5->LogicLong(b) > A);
		}
	};
}
