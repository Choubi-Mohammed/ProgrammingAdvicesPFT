/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   task_dur.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 10:53:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 10:58:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int d,h,m,s;
	cout << "please entre the duration(d,h,m,s) : \n";
	cin >> d;
	cin >> h;
	cin >> m;
	cin >> s;

	int second = (d*24*60*60) + (h*60*60)+(m*60)+s;
	cout << second << " Seconds" << endl;


	return 0;

}
