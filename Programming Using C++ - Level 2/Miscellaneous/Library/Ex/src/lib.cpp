/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   lib.cpp                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/24 12:20:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/24 12:39:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

int tt_sum(int a,int b)
{
	return (a+b);
}

bool tt_isEven(int nbr)
{
	if (nbr % 2 == 0)
		return true;
	else
		return false;
}

int tt_max(int a,int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int tt_fact(int n)
{
	if (n == 0)
		return 1;
	int i = 1;
	int fact = 1;
	while(i <= n)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

int tt_pow(int base,int exp)
{
	if(exp == 1)
		return 1;
	int i = 1;
	int pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}

bool tt_isPrim(int nbr)
{
	if(nbr <= 1)
		return false;
	int i = 2;
	while(i < nbr)
	{
		if (nbr % i == 0)
			return false;
		i++;
	}
	return true;
}


int tt_abs(int n)
{
	if (n < 0)
		return n * (-1);
	return n;
}
