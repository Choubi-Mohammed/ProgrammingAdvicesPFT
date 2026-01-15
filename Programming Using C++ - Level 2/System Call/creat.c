/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   creat.c                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/15 19:27:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/15 19:39:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//the header contain the creat()
#include <unistd.h>
//the header contain flags of creat()
#include <fcntl.h>

int main()
{
	//file name = test.txt
	//permesion = rwxr-xr-x
	//its return -1 when an error accurs
	int fd = creat("test.txt",733);

	if (fd == -1)
		printf("error creating file\n");
	printf("file Created sessecfully\n");

	//close the file descrptor
	close(fd);
	return 0;
}
