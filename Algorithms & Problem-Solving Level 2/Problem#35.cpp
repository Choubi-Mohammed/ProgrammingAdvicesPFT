/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#35.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/07 11:01:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/07 12:26:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string ReadStr()
{
	string str;
	cout << "Enter a sentence : ";
	getline(cin,str);
	return str;
}

bool tt_isspace(char character)
{
	return (character == ' ' || character == '\t' || character == '\n' || character == '\r' || character == '\v' || character == '\f');
}

void PrintEachWord(string str)
{
	int i = 0;
	bool inWord = false;
	while(i < str.size())
	{
		if(tt_isspace(str[i]) == false)
		{
			if(inWord == false)
				inWord = true;
			printf("%c",str[i]);
		}else
		{
			if(inWord == true)
			{
				printf("\n");
				inWord = false;
			}
		}

		i++;
	}
}
int main()
{
	string str = ReadStr();
	PrintEachWord(str);

	return 0;
}

