/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#23.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/31 17:33:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/02 19:07:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
bool tt_is_space(char str)
{
	return !(str >= 65 && str <= 90 || str >= 97 && str <= 122);
}

void PrintFirstCharMeth1(string str)
{
	printf("method 1 :\n");
	int i = 0;
	while(i < str.size())
	{
		if(tt_is_space(str[i]) == false)
		{
			if(i == 0||tt_is_space(str[i-1]) == true)
				printf("%c\n",str[i]);
		}
		i++;
	}
}

void PrintFirstCharMeth2(string str)
{
	printf("\nmethod 2 :\n");
	bool isFirstLetter = true;
	int i = 0;
	while(i < str.size())
	{
		if (tt_is_space(str[i]) == false && isFirstLetter)
				printf("%c\n",str[i]);
		isFirstLetter = tt_is_space(str[i]);
		i++;
	}
}
int main()
{
	string str;
	cout << "enter the string : ";
	getline(cin,str);
	PrintFirstCharMeth1(str);
	PrintFirstCharMeth2(str);
}
