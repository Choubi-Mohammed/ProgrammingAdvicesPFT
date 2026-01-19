/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem02.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/19 19:05:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/19 20:12:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	//src file is hello.txt
	//dest file is helloV2.txt
	int fd1 = open("hello.txt",O_RDONLY);
	int fd2 = open("helloV2.txt",O_CREAT | O_RDWR,0777);

	char *str =malloc(14);
	int resf = read(fd1,str,14);
	int resw = write(fd2,str,resf);

	printf("%d\n%d\n",fd1,fd2);
	close(fd1);
	close(fd2);


	return 0;
}
