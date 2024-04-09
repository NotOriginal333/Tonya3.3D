#include "pch.h"
#include "CppUnitTest.h"
#include "../Tonya3.3D/Number.h"
#include "../Tonya3.3D/Number.cpp"
#include "../Tonya3.3D/RealO.h"
#include "../Tonya3.3D/RealO.cpp"
#include "../Tonya3.3D/RealC.h"
#include "../Tonya3.3D/RealC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Number n(2);

			RealO r(n), res;

			res = power(r, 2);

			double p = res.getFlo();

			Assert::AreEqual(4, p, 0.0);
		}
	};
}
