/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sec_d_h_m_s.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 11:08:27 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 11:17:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

void sec_d_h_m_s(int TotalSecond)
{
	int nbrofday = TotalSecond / (24*60*60);
	int rem = TotalSecond % (24*60*60);
	int nbrofhours = rem / (60*60);
	rem = rem % (60*60);
	int nbrofminutes = rem / 60;
	rem = rem % 60;
	int nbrofseconds = rem;

	cout << nbrofday << " : " << nbrofhours << " : " << nbrofminutes << " : " << nbrofseconds << endl;

}
int main()
{
	int s;
	cout << "please entre the totoal seconds :";
	cin >> s;
	sec_d_h_m_s(s);

	return 0;
}
