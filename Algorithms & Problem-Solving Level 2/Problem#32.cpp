/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#32.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/07 09:56:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/07 10:18:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

bool isVowel(char character)
{
	char vowelChar[5] = {'a','e','i','o','u'};
	int i = 0;
	while(i < 5)
	{
		if(vowelChar[i] == character || vowelChar[i] - 32 == character)
			return true;
		i++;
	}
	return false;
}
int main()
{
	char character;
	cout << "Enter a Character : ";
	cin >> character;

	if(isVowel(character) == true)
		cout << "YES,The Character is Vowel.\n";
	else
		cout << "NO,The Character is NOT Vowel.\n";

	return 0;
}
