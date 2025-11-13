/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem6.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/13 16:51:41 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/13 16:59:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct stInfo{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo info;
	cout << "please entre you First Name :";
	cin >> info.FirstName;
	cout << "please entre you Last Name :";
	cin >> info.LastName;

	return info;
}

string GetFullName(stInfo info)
{
	string FullName="";

	FullName = info.FirstName + " " + info.LastName;

	return FullName;
}

void Print(string FullName)
{
	cout << "\nYou're Name is " << FullName << endl;
}

int main()
{
	Print(GetFullName(ReadInfo()));


	return 0;
}
