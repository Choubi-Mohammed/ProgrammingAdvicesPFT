/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   malloc_free.c                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/14 12:17:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/14 12:40:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	//syntaxe
	//void* malloc(size_t size)

	//size of types :  int = 4,char = 1,double = 8,etc...

	//for allocat one integer
	int *ptr;
	ptr = malloc(sizeof(int) * 1);

	*ptr = 1337;
	printf("%d\n",*ptr);
	free(ptr);//to deallocat memory

	//for a string = 1337. so string contain 4 char plus one for null termenator '\0' is 5.
	char *str;
	str = malloc(sizeof(char) * 5);
	str[0] = '1';
	str[1] = '3';
	str[2] = '3';
	str[3] = '7';
	str[4] = '\0';
	printf("%s",str);
	free(str);

	//shobeedev
	char *str2;
	str2 = malloc(sizeof(char) * 10);
	strcpy(str2,"shobeedev");
	printf("\n%s",str2);
	free(str2);


	return 0;
}
