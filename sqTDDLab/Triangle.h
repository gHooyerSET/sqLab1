#pragma once
#include <math.h>

class Triangle
{
private:
	double sideA, sideB, sideC;
	double angleA, angleB, angleC;
public:
	Triangle::Triangle(double a, double b, bool areSideLengths)//Incomplete constructor for hypotenuse test
	{
		if (areSideLengths == true)
		{
			this->sideA = a;
			this->sideB = b;
			this->sideC = sqrt( (a * a) + (b * b) );
		}
		else
		{
			this->angleA = a;
			this->angleB = b;
			this->angleC = 180 - (a + b);
		}
	}

	double Triangle::CalculateHypotenuse()
	{
		double retValue = sqrt( (sideA * sideA) + (sideB * sideB) );
		return retValue;
	}

	double Triangle::CalculateAreaRightTriangle()
	{
		double retValue = (sideA * sideB) * 0.5;
		return retValue;
	}

	double Triangle::CalculateMissingAngle()
	{
		double retValue = 180 - (angleA + angleB);
		return retValue;
	}
}; 
