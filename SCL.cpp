//created by https://github.com/wiktornowicki

/*
Standard Calculation Library
created for personal use to save time
*/

#include "SCL.hpp"

namespace scl
{
	long absolute(const long n)
	{
		if (n < 0)
			return (-n);
		else
			return n;
	}

	bool isEven(const long n)
	{
		if ((n % 2 == 0) && (n != 0))
			return true;
		else
			return false;
	}

	double addition(double x, double y)
	{
		return x + y;
	}

	double substraction(double x, double y)
	{
		return x - y;
	}

	double multiplication(double x, double y)
	{
		return x * y;
	}

	double division(double x, double y)
	{
		if (y != 0)
			return x / y;
		else
		{
			unsigned exitCode = 1;
			return exitCode;
		}
	}

	double power(double base, double exponent)
	{
		double result = 1;

		for (int n = 0; n < exponent; n++)
			result *= base;

		return result;
	}
}