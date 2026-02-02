/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#24.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/02 20:22:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/02 20:53:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string upperFisrtletter(string str)
{
	int i = 0;
	bool isFirst = true;
	while(i < str.size())
	{
		if (str[i] != ' ' && isFirst)
			str[i] = str[i] - 32;
		isFirst = (str[i] == ' ' ? true : false);
		i++;
	}
	return str;
}
int main()
{
	string str = "welcome to losse bois hermanus!";
	cout << upperFisrtletter(str) << endl;

	return 0;

}
