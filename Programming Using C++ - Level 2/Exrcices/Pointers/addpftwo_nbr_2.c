/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   addpftwo_nbr_2.c                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/12 20:07:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/12 20:25:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int addpftwo_nbr_2(int *n1,int *n2)
{
	return *n1+ *n2;
}
int main()
{
	int n1 = 5;
	int n2 = 6;


	int sum = addpftwo_nbr_2(&n1,&n2);
	printf("%d\n",sum);

}
