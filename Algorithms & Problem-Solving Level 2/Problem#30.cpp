/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#30.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/03 18:21:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/03 18:26:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
using namespace std;

int CountChar(string str,char character)
{
	int i = 0;
	int counter = 0;
	while(i < str.size())
	{
		if (str[i] == character)
			counter++;
		i++;
	}
	return counter;
}

int main()
{
	string str;
	char character;

	cout << "Enter A string : ";
	getline(cin,str);

	cout << "Enter  character : ";
	cin >> character;

	printf("character %c Count = %d\n",character,CountChar(str,character));

	return 0;
}
