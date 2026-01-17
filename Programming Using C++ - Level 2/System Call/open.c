/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   open.c                                                 |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 17:25:53 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 18:00:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

extern int errno;

int main() {

    // If file does not have in directory
    // then file foo.txt is created.
    int fd = open("hihi.txt", O_RDONLY | O_CREAT,777);
    printf("fd = %d\n", fd);

    if (fd == -1) {
        printf("failure\n");
    }
    return 0;
}
