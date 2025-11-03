/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   netsed_func_enum.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 17:01:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 17:18:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum DayOfWeek {San = 1,Mon= 2,Tue = 3,Wed = 4,Thu = 5,Fri = 6,Sat = 7};

void PrintMenu()
{
	cout << "****************************\n";
	cout << "         Week Day           \n";
	cout << "****************************\n";
	cout << "1: Sanday \n";
	cout << "2: Monday \n";
	cout << "3: Tuesday \n";
	cout << "4: wednesday \n";
	cout << "5: Thursday \n";
	cout << "6: Friday \n";
	cout << "7: Saturday \n";
	cout << "****************************\n";
	cout << "Please entre you're choice ? \n";
}

DayOfWeek ReadDayOfWeek()
{
	int Day;
	DayOfWeek ReadDay;
	cin >> Day;
	ReadDay = (DayOfWeek) Day;
	return ReadDay;
}
string PrintDayOfWeek(DayOfWeek day)
{
	switch(day)
	{
		case DayOfWeek::San:
			return "Sanday\n";
			break;
		case DayOfWeek::Mon:
			return "Monday\n";
			break;
		case DayOfWeek::Tue:
			return "Tuesday\n";
			break;
		case DayOfWeek::Wed:
			return "Wednesday\n";
			break;
		case DayOfWeek::Thu:
			return "Thursday\n";
			break;
		case DayOfWeek::Fri:
			return "Friday\n";
			break;
		case DayOfWeek::Sat:
			return "Saturday\n";
			break;
		default :
			return "Wrong Day!!\n";
	}
}

int main()
{
	PrintMenu();

	cout << "Today is : " << PrintDayOfWeek(ReadDayOfWeek()) << endl;
}
