/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem00.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/19 18:49:34 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/19 18:56:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	int fd = open("hello.txt",O_CREAT | O_WRONLY,0777);

	char *str = "Hello, World!\n";
	int res = write(fd,str,14);

	printf("%d\n",res);
	printf("%d\n",fd);
	close(fd);

}
