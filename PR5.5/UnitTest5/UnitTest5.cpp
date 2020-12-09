#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.5/PR5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			a = f(3, 2);
			Assert::AreEqual(a, 3);
		}
	};
}
