#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3/pr5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1);
			Assert::AreEqual(t, 0.5137850355269776);
		}
	};
}

