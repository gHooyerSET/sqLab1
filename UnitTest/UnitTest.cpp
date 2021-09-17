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
			Triangle obj;
			double hypotenuse = obj.CalculateHypotenuse();
			double expectedResult = sqrt( ( 4 * 4 ) + ( 4 * 4 ) );
			Assert::AreEqual(hypotenuse, expectedResult);
		}
	};
}
