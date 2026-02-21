/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#40.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/21 09:29:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/21 10:14:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<string> tt_splite(string str,char sep)
{
	vector<string> arr;
	int i = 0;
	string word = "";
	bool inword = false;
	while(i < str.size())
	{
		if(str[i] != sep)
		{
			word += str[i];
			inword = true;
		}else
		{
			if(inword)
			{
				arr.push_back(word);
				word = "";
				inword = false;
			}
		}
		i++;
	}
	if(word != "")
		arr.push_back(word);

	return arr;
}
string tt_reverse_words(string str,char sep = ' ')
{
	vector<string> ArrStr = tt_splite(str,sep);
	int lenArr = ArrStr.size();
	string word = "";
	int i = 0;
	while(i < lenArr)
	{
		word += ArrStr[lenArr - i - 1];
		if(i != lenArr - 1)
			word += " ";
		i++;
	}
	return word;
}
int main()
{
	string str = tt_reverse_words(" hello world from 1337 ");
	cout << str << "." << endl;

	return 0;
}
