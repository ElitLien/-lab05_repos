#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.2/PR5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k;
			k = A(2,0,1./2);
			Assert::AreEqual(k, -0.125);
		}
	};
}
