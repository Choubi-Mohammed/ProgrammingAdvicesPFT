/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   integer_format.c                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/22 10:49:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/22 11:00:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int number = 1;
	int number_tw = 11;

	//intger format
	printf("number = %d \n",number);
	printf("%d + %d = %d\n",number,number_tw,number_tw+number);

	//sepcific width
	printf("number = %0*d\n",2,number);
	printf("number = %0*d\n",3,number);
	printf("number = %0*d\n",4,number);
}
