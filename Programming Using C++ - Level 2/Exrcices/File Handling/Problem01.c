/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem01.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 20:11:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 20:19:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd = creat("testP01.txt",0777);

	char buff[] = "This is the content of the file testP01.txt.";
	int res = write(fd,buff,strlen(buff));

	if (res > 0)
		printf("The file test.txt created successfully...!!\n");

	close(fd);

	return 0;
}
