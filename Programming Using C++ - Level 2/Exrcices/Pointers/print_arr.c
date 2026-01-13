/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   print_arr.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/13 20:09:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/13 20:15:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("element - %d : %d\n",i,*(ptr+i));
		i++;
	}
}
int main()
{
	int arr[] = {7,9,8,4,6,5,3};
	int *ptr = arr;
	print_arr(ptr,7);

	return 0;
}
