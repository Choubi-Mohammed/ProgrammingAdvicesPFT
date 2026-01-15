/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   creat.c                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/15 19:27:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/15 19:42:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//the header contain the creat()
#include <unistd.h>
//the header contain flags of creat()
#include <fcntl.h>

int main()
{
	//How C create() works in OS?
	//The create() system call works as follows:
    //Create a new empty file on the disk.
    //Create file table entry.
    //Set the first unused file descriptor to point to the file table entry.
    //Return file descriptor used, -1 upon failure.

	//file name = test.txt
	//permesion = rwxr-xr-x
	//its return -1 when an error accurs
	int fd = creat("test.txt",733);

	if (fd == -1)
		printf("error creating file\n");

	// File was successfully created
	printf("File 'newfile.txt' created successfully \n"
	       "File descriptor: %d\n", fd);

	//close the file descrptor
	close(fd);
	return 0;
}
