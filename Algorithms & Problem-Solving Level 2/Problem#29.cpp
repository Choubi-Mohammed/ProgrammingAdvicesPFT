/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#29.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/03 17:52:31 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/03 18:00:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void PrintCountLetter(string str)
{
	printf("String Length : %d\n",str.size());
	int i = 0;
	int SmallChar = 0,CapChar = 0;
	while(i < str.size())
	{
		if(str[i] >= 65 && str[i] <= 90)
			CapChar++;
		if (str[i] >= 97 && str[i] <= 122)
			SmallChar++;
		i++;
	}
	printf("Small Character : %d\n",SmallChar);
	printf("Capital Character : %d\n",CapChar);
}

int main()
{
	string str;
	cout << "Enter a string : ";
	getline(cin ,str);
	PrintCountLetter(str);

	return 0;

}
