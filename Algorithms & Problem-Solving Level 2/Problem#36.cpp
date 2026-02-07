/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#36.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/07 21:26:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/07 21:48:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
bool tt_isspace(char character)
{
	return (character == ' ' || character == '\t' || character == '\n' || character == '\r' || character == '\v' || character == '\f');
}

int coutWord(string str)
{
	int i = 0;
	int counter = 0;
	bool isFirst = true;
	while(i < str.size())
	{
		if(tt_isspace(str[i]) == false)
		{
			if(i == 0 || tt_isspace(str[i-1]) == true)
				counter++;
		}
		/*if(tt_isspace(str[i]) == false && isFirst)
			counter++;
		isFirst = tt_isspace(str[i]);*/
		i++;
	}
	return counter;
}

int main()
{
	string str;
	cout << "Enter a sentence : ";
	getline(cin,str);
	cout << coutWord(str) << endl;

	return 0;
}
