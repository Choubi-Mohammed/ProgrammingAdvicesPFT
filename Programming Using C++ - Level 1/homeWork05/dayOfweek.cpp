/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   dayOfweek.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 12:01:02 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 12:10:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


void ReadData(int &d)
{
	cout << "please entre day :\n";
	cin >> d;
}

void PirntData(int d)
{
	if (d == 1)
		cout << "Sunday\n";
	else if (d == 2)
		cout << "Monday\n";
	else if (d == 3)
		cout << "Tuesday\n";
	else if (d == 4)
		cout << "Wednesday\n";
	else if(d == 5)
		cout << "Thursday\n";
	else if (d == 6)
		cout << "Friday\n";
	else if (d == 7)
		cout << "Saturday\n";
	else
		cout << "Wrong Day!!\n";
}

int main()
{
	int Day;
	ReadData(Day);
	PirntData(Day);

	return 0;
}
