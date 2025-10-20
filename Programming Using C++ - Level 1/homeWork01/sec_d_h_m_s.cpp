/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sec_d_h_m_s.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 18:14:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 18:25:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int second;
	int SecondPerDay = 24 * 60 *60;
	int SecondPerHours = 60 * 60;
	int SecondPerMinutes = 60;
	cout << "please entre the seconds :";
	cin >> second;
	int NumberOfDays = second / SecondPerDay ;
	int rem = second % SecondPerDay;
	int NumberOfHours = rem / SecondPerHours;
	rem = rem % SecondPerHours;
	int NumberOfMinutes = rem / SecondPerMinutes;
	rem = rem % SecondPerMinutes;
	int NumberOfSecond = rem;
	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSecond;

	return 0;


}
