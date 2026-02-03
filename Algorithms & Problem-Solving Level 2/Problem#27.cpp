/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#27.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/03 10:04:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/03 10:09:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

char InvertedChar(char character)
{
	if(character >= 65 && character <= 90)
		return (character + 32);//when character is upper case
	else
		return (character - 32);//when character is lower case
}

int main()
{
	char character;
	cout << "Enter a character : ";
	cin >> character;

	cout << "Inverted character : " << InvertedChar(character) << endl;

	return 0;
}
