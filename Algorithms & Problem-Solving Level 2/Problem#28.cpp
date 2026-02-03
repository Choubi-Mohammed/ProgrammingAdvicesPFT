/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#28.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/03 17:40:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/03 17:49:53 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

char invertedChar(char character)
{
	if(character >= 65 && character <= 90)
		return ( character + 32);
	else if(character >= 97 && character <= 122)
		return (character - 32);
	else
		return character;
}

string InvertedLetter(string sentence)
{
	int i = 0;
	while(i < sentence.size())
	{
		sentence[i] = invertedChar(sentence[i]);
		i++;
	}
	return sentence;
}

int main()
{
	string str;
	cout << "Enter a string : ";
	getline(cin,str);

	cout << InvertedLetter(str) << endl;

	return 0;
}

