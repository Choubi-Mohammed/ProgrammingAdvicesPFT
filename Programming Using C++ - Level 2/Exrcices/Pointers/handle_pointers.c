/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   handle_pointers.c                                      |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/06 15:57:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/06 16:08:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int m = 29;
	int *ab = &m;

	printf("adress of m = %p\n",&m);
	printf("value of m = %d\n\n",m);

	printf("now var ab is assigned with the adress of m.\n");
	printf("adress of pointer ab is : %p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);

	m = 34;
	printf("the value of m is assigned to 34 now.\n");
	printf("adress of pointer ab : %p\n",ab);
	printf("content of pointer ab : %d\n\n",*ab);

	*ab = 7;
	printf("the pointer var ab is assigned with the value 7 now.\n");
	printf("adress of m : %p\n",&m);
	printf("value of m : %d\n",m);

}
