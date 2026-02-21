/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#41.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/21 10:37:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/21 12:30:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
vector <string> tt_splite(string str,char sep = ' ')
{
	vector <string> ArrStr;
	string word = "";
	int i = 0;
	while(i < str.size())
	{
		if(str[i] != sep)
			word += str[i];
		else
		{
			if(word != "")
			{
				ArrStr.push_back(word);
				word = "";
			}
		}
		i++;
	}
	if(word != "")
		ArrStr.push_back(word);
	return ArrStr;
}
bool MatchCases(string word1,string word2)
{
	if(word1.size() != word2.size())
		return false;
	int i = 0;
	while(i < word1.size())
	{
		if(word1[i] != word2[i])
			return false;
		i++;
	}
	return true;
}


string tt_replace_word(string str,string oldWord,string newWord)
{
	vector <string> ArrStr = tt_splite(str);
	int i = 0;
	string word = "";
	while(i < ArrStr.size())
	{
		if(MatchCases(ArrStr[i],oldWord))
		{
			ArrStr[i] = newWord;
			word += ArrStr[i];
		}else
		{
			word += ArrStr[i];
		}
		if(i != ArrStr.size() - 1)
			word += " ";
		i++;
	}
	return word;
}

int main() {
    // 10 tests
    string test1 = "hello world";
    string test2 = "abc abc abc";
    string test3 = "nothing to replace here";
    string test4 = "repeat repeat repeat";
    string test5 = "one two three";
    string test6 = "oldword in the middle oldword";
    string test7 = "replace at start oldword";
    string test8 = "end oldword";
    string test9 = "mixed oldword oldword oldword";
    string test10 = "no match at all";

    cout << tt_replace_word(test1, "world", "planet") << endl;
    cout << tt_replace_word(test2, "abc", "123") << endl;
    cout << tt_replace_word(test3, "xyz", "abc") << endl;
    cout << tt_replace_word(test4, "repeat", "done") << endl;
    cout << tt_replace_word(test5, "two", "2") << endl;
    cout << tt_replace_word(test6, "oldword", "newword") << endl;
    cout << tt_replace_word(test7, "replace", "start") << endl;
    cout << tt_replace_word(test8, "oldword", "finish") << endl;
    cout << tt_replace_word(test9, "oldword", "X") << endl;
    cout << tt_replace_word(test10, "nothing", "something") << endl;

    return 0;
}
