/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   monthOfyear.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 12:00:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 12:21:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum monthOfyear {January = 1,February = 2, March = 3,April = 4,May = 5,June = 6,July = 7,August = 8,September = 9,October = 10,November = 11,December = 12};

void ReadData(int &Month)
{
	cout << "please entre Month : \n";
	cin >> Month;
}

void PrintData(int Month)
{
	monthOfyear MOY = (monthOfyear) Month;
	switch(MOY)
	{
		case monthOfyear::January:
			cout << "January\n";
			break;
		case monthOfyear::February:
			cout << "February\n";
			break;
		case monthOfyear::March:
			cout << "March\n";
			break;
		case monthOfyear::April:
			cout << "April\n";
			break;
		case monthOfyear::May:
			cout << "May\n";
			break;
		case monthOfyear::June:
			cout << "June\n";
			break;
		case monthOfyear::July:
			cout << "Jaly\n";
			break;
		case monthOfyear::August:
			cout << "August\n";
			break;
		case monthOfyear::September:
			cout << "September\n";
			break;
		case monthOfyear::October:
			cout << "October\n";
			break;
		case monthOfyear::November:
			cout << "November\n";
			break;
		case monthOfyear::December:
			cout << "December\n";
			break;
		default:
			cout << "Wrong Month!!\n";
	}
}

int main()
{
	int Month;
	ReadData(Month);
	PrintData(Month);


	return 0;
}
