#include "calculator.h"

// basic operators
#define MODU "mod"
#define SQRE "square"
// sicentific functions
#define SINSTR "sinOfDegree"
#define COSSTR "cosOfDegree"
// fun functions
#define GETINT "getIntPart"
#define GETDECI "getDecimalPart"
#define GETDIG "getXdigit"
#define SUMFIB "sumFibonacci"
#define SUMINT "sumIntPart"
#define SUMDEC "sumDecimalPart"
#define CMULT "crossMultiply"
#define FACT "factorial"

enum
{
	// basic operators
	POW = '^',
	MULT = '*',
	DIV = '/',
	MOD = '%',
	ADD = '+',
	SUB = '-',
	SQR = 'q',
	// sicentific functions
	SIN = 's',
	COS = 'c',
	// fun functions
	GETINTPART = 'i',
	GETDECPART = 'd',
	GETDIGIT = 'g',
	SFIB = 'F',
	SINT = 'I',
	SDEC = 'D',
	CROSSM = 'x',
	FACTO = '!',
	// other
	NEGATION = '~',
	COMMA = ',',
	DOT = '.',
	OPEN = '(',
	CLOSE = ')',
	SPACE = ' ',
	END = '\0'
};

Calculator *init_calculator(void)
{
	Calculator *calc = (Calculator *)malloc(sizeof(Calculator));
	if (calc == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	// Initialize expression, stack, and func
	// maximum length of input string.
	memset(calc->expression, 0, MAX_EXPRESSION_LENGTH);
	// maximum number of operations and digits in the input.
	memset(calc->stack, 0, MAX_STACK);
	// maximum length of expression.
	memset(calc->func, 0, MAX_FUNC_LEN);

	return calc;
}

float evalOperation(float a, float b, char op)
{
	switch (op)
	{
	case MULT:
		return multiply(a, b);
	case DIV:
		if (b == 0)
		{
			printf("Error: Division by zero.\n");
			exit(EXIT_FAILURE);
		}
		return divide(a, b);
	case MOD:
		if (a != (int)a || b != (int)b)
		{
			printf("Error: MOD requires mod(int,int).\n");
			exit(EXIT_FAILURE);
		}
		return mod(a, b);
	case ADD:
		return add(a, b);
	case SUB:
		return subtract(a, b);
	case SINT:
		return sumIntPart(a, b);
	case SDEC:
		return sumDecimalPart(a, b);
	case CROSSM:
		return crossMultiply(a, b);
	default:
		printf("Error: Invalid operator.\n");
		exit(EXIT_FAILURE);
	}
}

float evalPostfix(Calculator *calc)
{
	int stackIndex = 0;
	// postfix is the postfix expression
	char *postfix = calc->stack;
	// operatorStack is the stack to store the operands
	float valStack[MAX_STACK];

	while (*postfix != END)
	{
		if (isdigit(*postfix) || *postfix == DOT)
		{
			valStack[stackIndex++] = atof(postfix);
			while (isdigit(*(++postfix)) || *postfix == DOT)
			{
			}
		}
		else if (*postfix == SPACE || *postfix == COMMA)
		{
			// Do nothing
			postfix++;
			continue;
		}
		else if (*postfix == NEGATION)
		{
			float negnum = valStack[--stackIndex];
			valStack[stackIndex++] = -1 * (negnum);
		}
		else if (*postfix == SQR)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = square(num);
		}
		else if (*postfix == SIN)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = sinOfDegree(num);
		}
		else if (*postfix == COS)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = cosOfDegree(num);
		}
		else if (*postfix == GETINTPART)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = getIntPart(num);
		}
		else if (*postfix == GETDECPART)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = getDecimalPart(num);
		}
		else if (*postfix == GETDIGIT)
		{
			int n = valStack[--stackIndex];
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = getXdigit(num, n);
		}
		else if (*postfix == SFIB)
		{
			float num = valStack[--stackIndex];
			valStack[stackIndex++] = sumFibonacci(num);
		}
		else if (*postfix == FACTO)
		{
			int num = valStack[--stackIndex];
			valStack[stackIndex++] = factorial(num);
		}
		else if (*postfix == MULT || *postfix == DIV || *postfix == MOD || *postfix == ADD || *postfix == SUB ||
				 *postfix == SINT || *postfix == SDEC || *postfix == CROSSM)
		{
			float num2 = valStack[--stackIndex];
			float num1 = valStack[--stackIndex];
			valStack[stackIndex++] = evalOperation(num1, num2, *postfix);
		}
		else
		{
			printf("Error: Invalid expression.\n");
			exit(EXIT_FAILURE);
		}
		postfix++;
	}

	return valStack[0];
}

int isOperator(char c, int oprtype)
{
	if (oprtype == 1)
	{
		if (c == ADD || c == SUB || c == MULT || c == DIV || c == MOD || c == POW || c == NEGATION ||
			c == SIN || c == COS || c == FACTO || c == SQR || c == GETINTPART || c == GETDECPART ||
			c == GETDIGIT || c == SINT || c == SDEC || c == CROSSM || c == SFIB)
		{
			return 1;
		}
	}
	else
	{
		if (c == MULT || c == DIV || c == MOD || c == POW || c == NEGATION ||
			c == SIN || c == COS || c == FACTO || c == SQR || c == GETINTPART || c == GETDECPART ||
			c == GETDIGIT || c == SINT || c == SDEC || c == CROSSM || c == SFIB)
		{
			return 2;
		}
	}

	return 0;
}

// int checkOperator(Calculator *exp, char *op, int *opIndex)
// {
// 	if (strncmp(exp->expression + *opIndex, op, strlen(op)) == 0)
// 	{
// 		*opIndex += strlen(op) - 1;
// 		return 1;
// 	}
// 	return 0;

// }
// https://www.youtube.com/watch?v=Wz85Hiwi5MY
// Use shunting yard algorithm to convert infix to postfix
// do not pop cos/sin (other "words" operators) when push to operatorStack, but have to pop for other operators(symbol operators).
float parseExpression(Calculator *expression)
{
	char *exp = expression->expression;
	char *outputQ = expression->stack;
	char *operatorStack = expression->func;
	int outputIndex = 0;
	int stackIndex = 0;
	int lastTokenWasOperator = 1; // Tracks if the last token was an operator

	while (*exp != END)
	{
		if (isdigit(*exp) || *exp == DOT)
		{
			outputQ[outputIndex++] = *exp;
			lastTokenWasOperator = 0;
		}
		else if (*exp == ADD || *exp == SUB || *exp == COMMA)
		{
			if (lastTokenWasOperator == 1)
			{
				if (*exp == SUB)
					operatorStack[stackIndex++] = NEGATION;
				else
				{
					// positive: do nothing
					exp++;
					continue;
				}
			}
			else
			{
				while (stackIndex > 0 && (isOperator(operatorStack[stackIndex - 1], 1) == 1)) // operator type is 1
				{
					outputQ[outputIndex++] = SPACE;
					outputQ[outputIndex++] = operatorStack[--stackIndex];
				}
				outputQ[outputIndex++] = SPACE;
				operatorStack[stackIndex++] = *exp;
				lastTokenWasOperator = 1;
			}
		}
		else if (*exp == MULT || *exp == DIV) //|| *exp == POW
		{
			while (stackIndex > 0 && (isOperator(operatorStack[stackIndex - 1], 2) == 2)) // operator type is 2
			{
				outputQ[outputIndex++] = SPACE;
				outputQ[outputIndex++] = operatorStack[--stackIndex];
			}
			outputQ[outputIndex++] = SPACE;
			operatorStack[stackIndex++] = *exp;
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, MODU, strlen(MODU)) == 0)
		{
			exp += strlen(MODU) - 1;
			operatorStack[stackIndex++] = MOD;
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, SQRE, strlen(SQRE)) == 0)
		{
			exp += strlen(SQRE) - 1;
			operatorStack[stackIndex++] = SQR;
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, SINSTR, strlen(SINSTR)) == 0 || strncmp(exp, COSSTR, strlen(COSSTR)) == 0)
		{
			if (strncmp(exp, SINSTR, strlen(SINSTR)) == 0)
			{
				exp += strlen(SINSTR) - 1;
				operatorStack[stackIndex++] = SIN;
			}
			else
			{
				exp += strlen(COSSTR) - 1;
				operatorStack[stackIndex++] = COS;
			}
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, GETINT, strlen(GETINT)) == 0 || strncmp(exp, GETDECI, strlen(GETDECI)) == 0 || strncmp(exp, GETDIG, strlen(GETDIG)) == 0)
		{
			if (strncmp(exp, GETINT, strlen(GETINT)) == 0)
			{
				exp += strlen(GETINT) - 1;
				operatorStack[stackIndex++] = GETINTPART;
			}
			else if (strncmp(exp, GETDECI, strlen(GETDECI)) == 0)
			{
				exp += strlen(GETDECI) - 1;
				operatorStack[stackIndex++] = GETDECPART;
			}
			else
			{
				exp += strlen(GETDIG) - 1;
				operatorStack[stackIndex++] = GETDIGIT;
			}
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, SUMINT, strlen(SUMINT)) == 0 || strncmp(exp, SUMDEC, strlen(SUMDEC)) == 0 || strncmp(exp, SUMFIB, strlen(SUMFIB)) == 0)
		{
			if (strncmp(exp, SUMINT, strlen(SUMINT)) == 0)
			{
				exp += strlen(SUMINT) - 1;
				operatorStack[stackIndex++] = SINT;
			}
			else if (strncmp(exp, SUMDEC, strlen(SUMDEC)) == 0)
			{
				exp += strlen(SUMDEC) - 1;
				operatorStack[stackIndex++] = SDEC;
			}
			else
			{
				exp += strlen(SUMFIB) - 1;
				operatorStack[stackIndex++] = SFIB;
			}
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, CMULT, strlen(CMULT)) == 0)
		{
			exp += strlen(CMULT) - 1;
			operatorStack[stackIndex++] = CROSSM;
			lastTokenWasOperator = 1;
		}
		else if (strncmp(exp, FACT, strlen(FACT)) == 0)
		{
			exp += strlen(FACT) - 1;
			operatorStack[stackIndex++] = FACTO;
			lastTokenWasOperator = 1;
		}
		else if (*exp == OPEN)
		{
			operatorStack[stackIndex++] = *exp;
			lastTokenWasOperator = 1;
		}
		else if (*exp == CLOSE)
		{
			while (operatorStack[stackIndex - 1] != OPEN && stackIndex > 0)
			{
				outputQ[outputIndex++] = SPACE;
				outputQ[outputIndex++] = operatorStack[--stackIndex];
			}
			stackIndex--;
			lastTokenWasOperator = 0;
		}
		exp++;
	}

	// Add remaining operators to output
	while (stackIndex > 0)
	{
		outputQ[outputIndex++] = SPACE;
		outputQ[outputIndex++] = operatorStack[--stackIndex];
	}
	outputQ[outputIndex] = END;

	// Print the final outputQ array
	// printf("Final outputQ: %s\n", outputQ);

	return evalPostfix(expression);
}

void free_Calculator(Calculator *calc)
{
	free(calc);
}
