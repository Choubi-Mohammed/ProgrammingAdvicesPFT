/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   close.c                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 18:11:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 18:12:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	int fd1 = open("foo.txt", O_RDONLY);
	if (fd1 < 0) {
		perror("c1");
		exit(1);
	}
	printf("opened the fd = % d\n", fd1);

	// Using close system Call
	if (close(fd1) < 0) {
		perror("c1");
		exit(1);
	}
	printf("closed the fd.\n");
}
