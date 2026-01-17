/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   read.c                                                 |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 18:25:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 18:49:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{

	int fd2 = open("./open.c", O_RDWR);

	//write(fd2,"hello world!\n",13);
	char buffer[2000];
	ssize_t nbrofbyte = read(fd2,buffer,2000);

	write(1,buffer,nbrofbyte);
	printf("\n\nthe len of buffer = %d \n",nbrofbyte);
	printf("fd 1 = %d \n",fd2);

	close(fd2);

	return 0;
}
