/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   task_dur.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 11:02:43 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 11:07:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

int task_dur(int d,int h,int m,int s)
{
	int secondsDur = (d*24*60*60) + (h*60*60) + (m*60) + s;
	return secondsDur;
}

int main()
{
	int d,h,m,s;
	cout << "please entre the duration d,h,m,s :\n";
	cin >> d;
	cin >> h;
	cin >> m;
	cin >> s;
	cout << task_dur(d,h,m,s) << " Seconds" << endl;

	return 0;
}
