/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   monthOfyear.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 12:11:54 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 12:21:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int &Month)
{
	cout << "please entre month Of year :\n";
	cin >> Month;
}

void PrintData(int Month)
{
	if (Month == 1)
		cout << "January\n";
	else if (Month == 2)
		cout << "February\n";
	else if (Month == 3)
		cout << "March\n";
	else if (Month == 4)
		cout << "April\n";
	else if (Month == 5)
		cout << "May\n";
	else if (Month == 6)
		cout << "June\n";
	else if (Month == 7)
		cout << "July\n";
	else if (Month == 8)
		cout << "August\n";
	else if (Month == 9)
		cout << "Septemper\n";
	else if (Month == 10)
		cout << "October\n";
	else if (Month == 11)
		cout << "November\n";
	else if (Month == 12)
		cout << "December\n";
	else
		cout << "Wrong Month!!\n";
}

int main()
{
	int Month;
	ReadData(Month);
	PrintData(Month);


	return 0;
}
