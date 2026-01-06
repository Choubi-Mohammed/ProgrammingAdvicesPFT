/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   using_opr.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/06 16:10:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/06 16:34:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int m = 300;
	float fx = 300.600006;
	char cht = 'z';

	int *pint = &m;
	float *pfloat = &fx;
	char *pchar = &cht;

	printf("using & operator : \n");
	printf("adress of m = %p\n",&m);
	printf("adress of fx = %p\n",&fx);
	printf("adress of cht = %p\n\n",&cht);

	printf("using & and * operator:\n");
	printf("value at adress of m = %d\n",*pint);
	printf("value at adress of fx = %.6f\n",*pfloat);
	printf("value at adress of cht = %c\n\n",*pchar);

	printf("using only pointer varaible : \n");
	printf("adress of m = %p\n",pint);
	printf("adress of fx = %p\n",pfloat);
	printf("adress of cht = %p\n\n",pchar);

	printf("using only pointer operator :\n");
	printf("value at adress of m = %d\n",*pint);
	printf("value at adress of fx = %.6f\n",*pfloat);
	printf("value at adress of cht = %c\n",*pchar);

	return 0;
}
