#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_3/Lab06_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int array[] = { 2,4,26,41,50 };
			int t;
			t = Max(array, 15);
			Assert::AreEqual(t, 50);

		}
	};
}
