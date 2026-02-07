/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#34.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/07 10:39:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/07 10:51:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string ReadStr()
{
	string str;
	cout << "Enter a sentence : ";
	getline(cin,str);
	return str;
}
char tolowerr(char character)
{
	if(character >= 65 && character <= 90)
		return character + 32;
	else
		return character;
}

bool isVowel(char character)
{
	character = tolowerr(character);
	return (character == 'a' || character == 'o' || character == 'u' || character == 'i' || character == 'e' );
}

void PrintVowel(string str)
{
	int i = 0;
	printf("Vowel in String are : ");
	while(i < str.size())
	{
		if(isVowel(str[i]) == true)
			printf("%c ",str[i]);
		i++;
	}
}
int main()
{
	string str = ReadStr();
	PrintVowel(str);
	return 0;
}
