
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 5.3/ЛР 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test53
{
	TEST_CLASS(test53)
	{
	public:

		TEST_METHOD(TestF_Series)
		{
			double result = f(0.5);
			Assert::AreEqual(0.2526123168, result, 1e-6);
		}

		TEST_METHOD(TestF_Formula)
		{
			double result = f(1);
			Assert::AreEqual(1.6845787244, result, 1e-6);
		}
	};
}