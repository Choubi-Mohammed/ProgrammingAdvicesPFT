/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   maxoftwo.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/12 20:29:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/13 20:08:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int maxoftwo(int *nbr1,int *nbr2)
{
	if(*nbr1 > *nbr2)
		return *nbr1;
	else
		return *nbr2;
}
int main()
{
	int nbr1,nbr2;
	printf("enter the nbr one :");
	scanf("%d",&nbr1);
	printf("enter the nbr two :");
	scanf("%d",&nbr2);

	int *ptr1 = &nbr1;
	int *ptr2 = &nbr2;

	printf("the max of thes %d and %d is %d",nbr1,nbr2,maxoftwo(ptr1,ptr2));

	return 0;
}
