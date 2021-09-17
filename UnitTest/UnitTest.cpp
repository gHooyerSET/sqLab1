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
			Triangle obj(4.0, 4.0, true);
			double hypotenuse = obj.CalculateHypotenuse();
			double expectedResult = sqrt( ( 4.0 * 4.0 ) + ( 4.0 * 4.0 ) );
			Assert::AreEqual(hypotenuse, expectedResult);
		}

		TEST_METHOD(rightAreaTest)
		{
			Triangle obj(4.0, 4.0, true);
			double area = obj.CalculateAreaRightTriangle();
			double expectedResult = (4.0 * 4.0) * 0.5;
			Assert::AreEqual(area, expectedResult);
		}

		TEST_METHOD(missingAngleTest)
		{
			Triangle obj(60, 60, false);
			double missingAngle = obj.CalculateMissingAngle();
			double expectedResult = 180 - (60 + 60);
			Assert::AreEqual(missingAngle, expectedResult);
		}

		TEST_METHOD(isRightTriangleTest)
		{
			Triangle obj(90, 40, false);
			bool rightTriangle = obj.IsRightTriangle();
			Assert::AreEqual(rightTriangle, true);
		}

		TEST_METHOD(isValidTriangle)
		{
			Triangle obj(90, 90, 90, false);
			bool isValidTriangle = obj.IsValidTriangle();
			Assert::AreEqual(isValidTriangle, false);
		}
	};
}
