#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\fhntv\Documents\Projects\ІПЗ_Lab_3\ІПЗ_Lab_3\ІПЗ_Lab_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		TEST_METHOD(calculate_getnegative30and3_expected20)
		{
			float x = -30;
			int n = 3;
			float expected = 20;

			float actual = calculate(x, n);

			if (fabs(actual - expected) < 0.0001f)
			{
				Assert::IsTrue(true);
			}
			else
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(calculate_get10and5_expected57_1071)
		{
			float x = 10;
			int n = 5;
			float expected = 57.1071;

			float actual = calculate(x, n);

			if (fabs(actual - expected) < 0.0001f)
			{
				Assert::IsTrue(true);
			}
			else
			{
				Assert::Fail();
			}
		}
	};

	TEST_CLASS(checkLoopBoundsValidity_Tests)
	{
	public:
		TEST_METHOD(checkLoopBoundsValidity_get10and60_exceptionNotThrown)
		{
			int a = 10;
			int b = 60;

			try
			{
				checkLoopBoundsValidity(a, b);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail;
			}
		}

	public:
		TEST_METHOD(checkLoopBoundsValidity_get35and5_exceptionThrown)
		{
			int a = 35;
			int b = 5;

			try
			{
				checkLoopBoundsValidity(a, b);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkUpperBoundValidity_Tests)
	{
	public:
		TEST_METHOD(checkUpperBoundValidity_get6_exceptionNotThrown)
		{
			int n = 6;

			try
			{
				checkUpperBoundValidity(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkUpperBoundValidity_get1_exceptionThrown)
		{
			int n = 1;

			try
			{
				checkUpperBoundValidity(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

	TEST_CLASS(checkLoopStepValidity_Tests)
	{
	public:
		TEST_METHOD(checkLoopStepValidity_get13_exceptionNotThrown)
		{
			int h = 13;

			try
			{
				checkLoopStepValidity(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkLoopStepValidity_getnegative3_exceptionThrown)
		{
			int h = -3;

			try
			{
				checkLoopStepValidity(h);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};

}
