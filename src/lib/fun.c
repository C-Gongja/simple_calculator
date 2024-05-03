#include "fun.h"

/* Your code here */

int getIntPart(float num)
{
	int integetPart = (int)num;
	return integetPart;
}

float getDecimalPart(float num)
{
	int integetPart = (int)num;
	float decimalPart = num - integetPart;
	return decimalPart;
}

float getXdigit(float num, int n)
{
	char buffer[512] = {0};
	snprintf(buffer, sizeof(buffer), "%f", num);
	int counter = 0;
	int digitsCounted = 0;

	while (buffer[counter] != '\0')
	{
		if (digitsCounted >= n && buffer[counter] != '.')
		{
			buffer[counter] = '0';
		}
		if (digitsCounted < n && buffer[counter] == '.')
		{
			digitsCounted--;
		}
		if (digitsCounted < n && buffer[counter] == '-')
		{
			digitsCounted--;
		}

		digitsCounted++;
		counter++;
	}
	return atof(buffer);
}

int sumFibonacci(float num)
{
	int limit = (int)num;
	int fib1 = 1, fib2 = 1;
	int sum = 0;

	if (limit == 1)
		return 2;
	else if (limit <= 0)
		return 0;

	sum += fib1;

	while (fib2 <= limit)
	{
		sum += fib2;
		int fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}

	return sum;
}

int sumIntPart(float num1, float num2)
{
	int intPart1 = (int)num1;
	int intPart2 = (int)num2;
	return intPart1 + intPart2;
}

float sumDecimalPart(float num1, float num2)
{
	float decimalPart1 = num1 - (int)num1;
	float decimalPart2 = num2 - (int)num2;
	return decimalPart1 + decimalPart2;
}

float crossMultiply(float num1, float num2)
{
	int intPart1 = (int)num1;
	int intPart2 = (int)num2;
	float fracPart1 = num1 - intPart1;
	float fracPart2 = num2 - intPart2;
	return intPart1 * fracPart2 + fracPart1 * intPart2;
}

int factorial(int n)
{
	double fact = 1.0;
	int neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	for (int i = 1; i <= n; ++i)
	{
		fact *= i;
	}
	if (neg)
	{
		fact = -fact;
	}
	return fact;
}
