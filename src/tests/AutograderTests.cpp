extern "C"
{
#include "calculator.h"
}
#include <gtest/gtest.h>

char result_str[30]; // Used to store the float as a string

TEST(AutograderTests, TestBasic)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "-6/-2");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "3.000");
	free_Calculator(cal);
}

TEST(AutograderTests, TestBasic0)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "sinOfDegree(-square(10))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "-0.985");
	free_Calculator(cal);
}

TEST(AutograderTests, TestBasic1)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "sinOfDegree(-mod(9,2))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "-0.017");
	free_Calculator(cal);
}

TEST(AutograderTests, TestBasic2)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "sumFibonacci(2)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "4.000");
	free_Calculator(cal);
}

TEST(AutograderTests, BracketTest0)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "(10*2) + (-16/4) - square(3) + mod(10, 3)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "8.000");
	free_Calculator(cal);
}

TEST(AutograderTests, BracketTest1)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "((10*2) + (16/4) - square(3) + mod(10, 3))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "16.000");
	free_Calculator(cal);
}

TEST(AutograderTests, BracketTest2)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "((10*2 + 16/4) - square(3) + mod(10, 3)) + 10");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "26.000");
	free_Calculator(cal);
}

TEST(AutograderTests, Test0)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "mod(2,square(3))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "2.000");
	free_Calculator(cal);
}

//*************************************
TEST(AutograderTests, TestBasicBrackets1)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "getXdigit(301.430,5)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "301.430");
	free_Calculator(cal);
}

TEST(AutograderTests, TestCombined1)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "getXdigit(301.14,6)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "301.140");
	free_Calculator(cal);
}

TEST(AutograderTests, TestBasicBrackets2)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "((5 - 2) * (8 / 2))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "12.000");
	free_Calculator(cal);
}

TEST(AutograderTests, TestScientific1)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "sinOfDegree(-10)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "-0.174");
	free_Calculator(cal);
}

TEST(AutograderTests, TestScientific2)
{
	Calculator *cal = init_calculator();
	strcpy(cal->expression, "sinOfDegree(3*(1+2))");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	EXPECT_STREQ(result_str, "0.156");
	free_Calculator(cal);
}

TEST(AutograderTests, NegFactorialTest)
{
	Calculator *cal = init_calculator();
	// Construct a large expression with many operators and operands
	strcpy(cal->expression, "sumIntPart(sumDecimalPart(getIntPart(crossMultiply(sumFibonacci(getXdigit(factorial(9), 0 + 1) / 30000), getIntPart(1.5)) + 1.999) + 0.9, 0.3), 4.3)");
	float result = parseExpression(cal);
	snprintf(result_str, 30, "%.3f", result);
	// Provide an expected result based on the calculation of the expression
	EXPECT_STREQ(result_str, "5.000");
	free_Calculator(cal);
}