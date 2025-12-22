/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   float_format.c                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/22 11:08:50 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/22 11:16:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	const float PI = 3.1478963;
	//Precision specification
	printf("Precision specification %.*f \n",2,PI);
	printf("Precision specification %.*f \n",4,PI);
	printf("Precision specification %.*f \n",6,PI);
	printf("Precision specification %.*f \n\n",8,PI);

	float nbr1 = 14.1258; float nbr2 = 4.2016;
	printf("%.*f / %.*f = %.*f\n\n",4,nbr1,4,nbr2,4,nbr1/nbr2);

	printf("Precision specification %.2f \n",PI);
	printf("Precision specification %.4f \n",PI);
	printf("Precision specification %.6f \n",PI);
	printf("Precision specification %.8f \n\n",PI);

	return 0;
}
