/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   method_str.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/15 09:51:46 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/15 11:08:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Hello World!";

	//Prints the length of the string
	cout << "the length of string : " << str.length() << endl;

	//Returns the letter at position 6
	cout << "character at position 6 is : " << str.at(6) << endl;

	//Adds @shobeedev to the end of string
	str.append(", @shobeedev ");
	cout << str << endl;

	//inserts My at position 5
	str.insert(5," My");
	cout << str << endl;

	//Prints all the next 3 letters from position 5.
	cout << str.substr(5,3) << endl;

	//Adds one character to the end of the string
	str.push_back('X');
	cout << str << endl;

	//Removes one character from the end of the string
	str.pop_back();
	cout << str << endl;

	//Finds shobee in the string
	cout << str.find("shobee") << endl;

	//Finds Ali in the string
	cout << str.find("Ali") << endl;
	if(str.find("Ali")== str.npos)
		cout << "Not found!" << endl;

	//clears all string letters.
	str.clear();
	cout << str << endl;

	return 0;
}
