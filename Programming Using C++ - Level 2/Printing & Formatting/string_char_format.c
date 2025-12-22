/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   string_char_format.c                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/22 11:23:55 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/22 11:29:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char name[] = "Mohammed Choubi";
	char nickname[] = "shobee";

	printf("My name is %s\n",name);
	printf("My nick name is %s\n\n",nickname);

	char character = 'k';
	printf("character is = %*c\n",1,character);
	printf("character is = %*c\n",2,character);
	printf("character is = %*c\n",3,character);
}
