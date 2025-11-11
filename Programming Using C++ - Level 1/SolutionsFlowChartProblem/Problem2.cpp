/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem2.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/11 17:26:29 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/11 17:29:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

string ReadName()
{
	string name;
	cout << "Please entre Your Name : ";
	getline(cin,name);

	return name;
}

void PrintName(string name)
{
	cout << "Your Name is : " << name << endl;
}

int main()
{
	PrintName(ReadName());

	return 0;
}
