/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#26.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/02 21:21:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/02 21:30:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string ToLower(string str)
{
	int i = 0;
	while(i < str.size())
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}

string ToUpper(string str)
{
	int i = 0;
	while(i < str.size())
	{
		if(str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return str;
}

int main()
{
	string str;
	cout << "Enter a sentence : ";
	getline(cin,str);

	cout << "ToLower :\n";
	cout << ToLower(str) << endl;

	cout << "ToUpper : \n";
	cout << ToUpper(str) << endl;

	return 0;
}
