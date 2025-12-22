/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   integer_format.c                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/22 10:49:25 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/22 11:06:51 by shobeedev            tfaaty fi l3oolaa   */
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
	//method 1
	printf("number = %0*d\n",2,number);
	printf("number = %0*d\n",3,number);
	printf("number = %0*d\n",4,number);
	//method 2
	printf("number = %02d\n",number);
	printf("number = %03d\n",number);
	printf("number = %04d\n",number);

}
