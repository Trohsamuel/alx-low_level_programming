#include "main.h"
/**
 *
 *
 */

int helperFunction(int num, int i)
{
	if (i < num)
	
	{
		if (num % i == 0)
		{
			return (0);
		}

		else

		{

			return (helperFunction(num, i + 1));

		}
	}
	else
	{
		return (1);

	}

}
/**
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	
	{
		return (0);
	}

	else
	
	{
		return (helperFunction(n, 2));
	}

}

