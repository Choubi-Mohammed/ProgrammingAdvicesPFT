/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem03.c                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/19 20:13:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/19 22:55:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
bool isSpace(char character)
{
	return (character == '\n' || character == '\t' || character == ' ');
}

bool isChar(char character)
{
	return (character >= 65 && character <= 90 || character >= 97 && character <= 122);
}
int nbrOfChar(char *buf)
{
	int i = 0;
	int counter = 0;
	while(buf[i] != '\0')
	{
		if(isChar(buf[i]) == true)
			counter++;
		i++;
	}
	return counter;
}
int nbrOfLines(char *buf)
{
	int i = 0;
	int counter = 0;
	while(buf[i] != '\0')
	{
		if(buf[i] == '\n')
			counter++;
		i++;
	}
	return counter;
}

int nbrOfWords(char *buf)
{
	int i = 0;
	int counter = 0;
	while(buf[i] != '\0')
	{
		if (isSpace(buf[i]) == false)
		{
			if(isSpace(buf[i-1]) == true || i == 0)
				counter++;
		}
		i++;
	}
	return counter;
}

int main()
{
	int fd1 = open("../../System Call/important.txt",O_RDONLY);
	char *buffer = malloc(1024);
	int resR = read(fd1,buffer,1024);
	write(1,buffer,resR);
	int nbrChar = nbrOfChar(buffer);
	int nbrLines = nbrOfLines(buffer);
	int nbrWords = nbrOfWords(buffer);
	printf("fd = %d, resR = %d, nbrOfChar = %d\n",fd1,resR,nbrChar);
	printf("nbrChar = %d, nbrLines = %d, nbrWords = %d\n",nbrChar,nbrLines,nbrWords);

	close(fd1);

	return 0;
}
