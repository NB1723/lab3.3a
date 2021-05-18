#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex_Public.cpp"
#include "../Complex_Private.cpp"
#include "../Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex_Private A1(4, 1), B1(6, 9);
			Complex_Private C = A1 + B1;
			int S = C.GetRe();
			Assert::AreEqual(S, 10);
		}
	};
}