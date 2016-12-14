#include <stdlib.h>
#include "Algorithm.h"


Algorithm::Algorithm(void)
{
	status = NULL;
}


Algorithm::~Algorithm(void)
{
	status = NULL;
}

int Algorithm::Add(int a, int b)
{
	if(status != NULL)
	{
		status('+', a, b, a+b);
	}

	return a+b;
}

int Algorithm::Abs(int a, int b)
{
	if(status != NULL)
	{
		status('-', a, b, a-b);
	}

	return a-b;
}

int Algorithm::Mul(int a, int b)
{
	if(status != NULL)
	{
		status('*', a, b, a*b);
	}

	return a*b;
}