/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#31.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/03 18:21:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/03 20:32:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
using namespace std;

char InvertedChar(char character)
{
	if(character >= 65 && character <= 90)
		return (character + 32);//when character is upper case
	else
		return (character - 32);//when character is lower case
}

void CountChar(string str,char character)
{
	int i = 0;
	int counter = 0;
	int countMatchCase = 0;
	while(i < str.size())
	{
		if(character >= 65 && character <= 90)//upper
		{
			if (str[i] == character)
				counter++;
			if (str[i] == character || str[i] == character + 32)
				countMatchCase++;
		}
		if(character >= 97 && character <= 122)//lower
		{
			if (str[i] == character)
				counter++;
			if (str[i] == character || str[i] == character - 32)
				countMatchCase++;
		}
		i++;
	}
	printf("Letter %c count = %d\n",character,counter);
	printf("Letter %c or %c count = %d\n",character,InvertedChar(character),countMatchCase);

}

int main()
{
	string str;
	char character;

	cout << "Enter A string : ";
	getline(cin,str);

	cout << "Enter  character : ";
	cin >> character;

	CountChar(str,character);

	return 0;
}
