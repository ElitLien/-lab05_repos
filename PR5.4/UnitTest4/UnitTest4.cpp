#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.4/PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			int b;
			int c;
			int d;
			int f;
			a = S0(1, 1);
			b = S1(1, 1, 1);
			c = S2(1, 1, 1);
			d = S3(1, 1, 1,0);
			f = S4(1, 1, 1,0);
			Assert::AreEqual(a, 2);
			Assert::AreEqual(b, 2);
			Assert::AreEqual(c, 2);
			Assert::AreEqual(d, 2);
			Assert::AreEqual(f, 2);
		}
	};
}
