/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   dayOfweek.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 12:32:43 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 12:43:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum dayOfweek {Sunday = 1,Monday = 2,Tuesday = 3,Wednesday = 4,Thursday = 5,Friday = 6,Saturday = 7};

void ReadData(int &day)
{
	cout << "please entre day :\n";
	cin >> day;
}

void PrintData(int day)
{
	dayOfweek days = (dayOfweek) day;
	switch(days)
	{
		case dayOfweek::Sunday:
			cout << "Sunday\n";
			break;
		case dayOfweek::Monday:
			cout << "Monday\n";
			break;
		case dayOfweek::Tuesday:
			cout << "Tuesday\n";
			break;
		case dayOfweek::Wednesday:
			cout << "Wednesday\n";
			break;
		case dayOfweek::Thursday:
			cout << "Thursday\n";
			break;
		case dayOfweek::Friday:
			cout << "Friday\n";
			break;
		case dayOfweek::Saturday:
			cout << "Saturday\n";
			break;
		default :
			cout << "Wrong Day!!\n";
	}
}

int main()
{
	int Day;
	ReadData(Day);
	PrintData(Day);

	return 0;
}
