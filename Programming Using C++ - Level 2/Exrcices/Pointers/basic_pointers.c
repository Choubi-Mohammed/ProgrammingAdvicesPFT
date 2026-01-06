/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   basic_pointers.c                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/06 15:48:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/06 15:55:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int m = 10;
	int n,o;
	int *z;

	z = &m;
	printf("z store adress of m = %p\n",z);
	printf("*z store the value of m = %d\n",*z);
	printf("&m is adress of m = %p\n",&m);
	printf("&n is adress of n = %p\n",&n);
	printf("&o is adress of o = %p\n",&o);
	printf("&z is adress of z = %p\n",&z);


	return 0;
}
