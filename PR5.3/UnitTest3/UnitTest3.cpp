#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.3/PR5.3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int g;
			g = f(8) + (f(17) * f(17));
			Assert::AreEqual(g, 1);
		}
	};
}
