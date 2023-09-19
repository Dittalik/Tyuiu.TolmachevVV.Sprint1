#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint1.Task1.V1to5.Lib/Tyuiu.TolmachevVV.Sprint1.Task1.V1to5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint1Task1V1to5Tests
{
	TEST_CLASS(TyuiuTolmachevVVSprint1Task1V1to5Tests)
	{
	public:
		
		TEST_METHOD(TestV1)
		{
			ISprint1Task1* serviceV1 = new ServiceV1();
			int a = 123;
			int b = 15;
			Assert::IsTrue(!serviceV1->Logic(a) && serviceV1->Logic(b));
		}
		TEST_METHOD(TestV2)
		{
			ISprint1Task1* serviceV2 = new ServiceV2();
			int a = 22;
			int b = 39;
			Assert::IsTrue(!serviceV2->Logic(a) && serviceV2->Logic(b));
		}
		TEST_METHOD(TestV3)
		{
			ISprint1Task1* serviceV3 = new ServiceV3();
			int a = 123;
			int b = 12;
			Assert::IsTrue(!serviceV3->Logic(a) && serviceV3->Logic(b));
		}
		TEST_METHOD(TestV4)
		{
			ISprint1Task1* serviceV4 = new ServiceV4();
			int a = 123;
			int b = 157;
			Assert::IsTrue(!serviceV4->Logic(a) && serviceV4->Logic(b));
		}
		TEST_METHOD(TestV5)
		{
			ISprint1Task1* serviceV5 = new ServiceV5();
			int a = 123;
			int b = 157;
			Assert::IsTrue(!serviceV5->Logic(a) && serviceV5->Logic(b));
		}
	};
}
