//created by https://github.com/wiktornowicki

/*
Standard Calculation Library
created for personal use to save time
*/

#include "SCL.hpp"

long scl::absolute(const long n)
{
	if (n < 0)
	{
		return -n;
	}
	else
	{
		return n;
	}
}
	
bool scl::isEven(const long n)
{
	if (n % 2 == 0 && n != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
	
double scl::addition(double a, double b)
{
	return (a + b);
}
	
double scl::substraction(double a, double b)
	{
		return (a - b);
	}
	
double scl::multiplication(double a, double b)
{
	return (a * b);
}
	
double scl::division(double a, double b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return 0;
	}
}
	
double scl::power(long base, long exponent)
{
	double result = 1;
		
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
		
	return result;
}