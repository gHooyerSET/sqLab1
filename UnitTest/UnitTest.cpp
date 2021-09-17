#include "pch.h"
#include "CppUnitTest.h"
#include "../sqTDDLab/Triangle.h"
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(hypotenuseTest)
		{
			Triangle obj(4.0, 4.0);
			double hypotenuse = obj.CalculateHypotenuse();
			double expectedResult = sqrt( ( 4.0 * 4.0 ) + ( 4.0 * 4.0 ) );
			Assert::AreEqual(hypotenuse, expectedResult);
		}
	};
}
