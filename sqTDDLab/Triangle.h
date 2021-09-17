#pragma once
#include <math.h>

class Triangle
{
private:
	double sideA, sideB, sideC;
	double angleA, angleB, angleC;
public:
	Triangle::Triangle(double sideA, double sideB)//Incomplete constructor for hypotenuse test
	{
		this->sideA = sideA;
		this->sideB = sideB;
	}

	double Triangle::CalculateHypotenuse()
	{
		double retValue = sqrt((sideA * sideA) + (sideB * sideB));
		return retValue;
	}
}; 
