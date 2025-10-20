/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   task_dur.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 18:06:50 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 18:12:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
	int dys,hrs,mnts,scd;
	cout << "please entre days,hours,minute,second :\n";
	cin >> dys;
	cin >> hrs;
	cin >> mnts;
	cin >> scd;

	scd = (dys * 24 * 60 *60) + (hrs *60 *60) + (mnts * 60) +scd;
	cout << "the Total second is : " << scd << endl;
}
