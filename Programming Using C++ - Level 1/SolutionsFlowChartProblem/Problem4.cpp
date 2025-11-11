/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem4.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/11 17:51:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/11 18:05:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

struct stinfo{
	int age;
	bool HasHiredriver;
};

stinfo ReadInfo()
{

	stinfo info;
	cout << "Please entre You're Age : ";
	cin >> info.age;
	cout << "Do you Have a Licence Driver :";
	cin >> info.HasHiredriver;

	return info;
}

bool isAccepted(stinfo info)
{
	return (info.age > 21 && info.HasHiredriver);
}
void Print(stinfo info)
{
	if(isAccepted(info))
		cout << "\nHired.\n";
	else
		cout << "\nRejected.\n";
}

int main()
{
	Print(ReadInfo());

	return 0;
}
