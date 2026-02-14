/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#39.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/02/14 16:25:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/02/14 17:49:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

string strjoin(vector<string> str,string sep)
{
	int i = 0;
	int lenofvec = str.size();
	string word = "";
	while(i < lenofvec)
	{
		word += str[i];
		if(i != lenofvec-1)
			word+=sep;
		i++;
	}
	return word;
}
int main()
{
    // Test 1 - Normal case
    vector<string> t1 = {"This", "is", "a", "test"};
    cout << "Test 1: " << strjoin(t1, " ") << endl;

    // Test 2 - Different separator
    vector<string> t2 = {"1337", "pool", "2026"};
    cout << "Test 2: " << strjoin(t2, "-") << endl;

    // Test 3 - One element only
    vector<string> t3 = {"Hello"};
    cout << "Test 3: " << strjoin(t3, ",") << endl;

    // Test 4 - Empty vector
    vector<string> t4;
    cout << "Test 4: \"" << strjoin(t4, " ") << "\"" << endl;

    // Test 5 - Empty separator
    vector<string> t5 = {"A", "B", "C"};
    cout << "Test 5: " << strjoin(t5, "") << endl;

    return 0;
}

