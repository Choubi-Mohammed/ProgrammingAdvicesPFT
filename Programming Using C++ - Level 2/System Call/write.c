/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   write.c                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 19:38:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 20:04:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	//to create file writeTest with this premession rwxrwxrwx and flag read and write
	int fd = open("writeTest.txt",O_CREAT | O_RDWR,0777);

	//write into file
	/*char buffer[] = "hello i am shobeedev!\n";
	int byte = write(fd,buffer,22);
	printf("%d %d\n",fd,byte);*/

	//allocat 20 char for reading it from the file
	char *buff = malloc(22);
	int lenBuff = read(fd,buff,22);
	printf("%d %d\n",fd,lenBuff);
	write(1,buff,lenBuff);
	close(fd);

	return 0;
}
