/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#33.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/07 10:22:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/07 10:32:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

char tt_tolower(char character)
{
	if(character >= 65 && character <= 90)
		return (character + 32);
	else
		return character;
}

bool isVowel(char character)
{
	character = tt_tolower(character);
	return (character == 'a' ||character == 'o' ||character == 'u' ||character == 'i' || character == 'e');
}
int countVowel(string str)
{
	int i = 0;
	int counter = 0;
	while(i < str.size())
	{
		if(isVowel(str[i]) == true)
			counter++;
		i++;
	}
	return counter;
}

int main()
{
	string str;
	cout << "Enter a sentence : ";
	getline(cin,str);

	cout << "\nNumber of Vowel is : " << countVowel(str) << endl;

	return 0;
}
