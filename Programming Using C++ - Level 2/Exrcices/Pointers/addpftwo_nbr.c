/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   addpftwo_nbr.c                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/12 20:07:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/12 20:27:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int addpftwo_nbr(int *n1,int *n2)
{
	return *n1 + *n2;
}

int main()
{
	int n1 = 5;
	int n2 = 6;

	int *num1,*num2;

	num1 = &n1;
	num2 = &n2;

	int sum = addpftwo_nbr(num1,num2);
	printf("%d\n",sum);

}
