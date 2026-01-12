/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   addpftwo_nbr.c                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/12 20:07:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/12 20:17:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int n1 = 5;
	int n2 = 6;
	int *num1,*num2;

	num1 = &n1;
	num2 = &n2;

	int sum = *num1 + *num2;
	printf("%d\n",sum);

}
