/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#38.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/10 22:20:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/14 15:39:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
using namespace std;
bool whitespace(char lett)
{
	return (lett == ' ' || lett == '\t' || lett == '\n' || lett == '\v' );
}
int LeftIndex(string str)
{
	int i = 0;
	while(i < str.size())
	{
		if(!whitespace(str[i]))
			break;
		i++;
	}
	return i;
}
string TrimLeft(string str)
{
	int i = LeftIndex(str);
	string word = "";
	while(i < str.size())
	{
		word += str[i];
		i++;
	}
	return word;
}
int RightIned(string str)
{
	int i = str.size();
	while(i > 0)
	{
		if(!whitespace(str[i-1]))
			break;
		i--;
	}
	return i;
}
string TrimRight(string str)
{
	int index = RightIned(str);
	int i = 0;
	string word = "";
	while(i < index)
	{
		word+=str[i];
		i++;
	}
	return word;
}
string Trim(string str)
{
	string TrimLeftstr = TrimLeft(str);
	return TrimRight(TrimLeftstr);
}
int main()
{
	string str;
	cout << "enter a string : ";
	getline(cin,str);

	cout << Trim(str) << "." << endl;
	return 0;
}
