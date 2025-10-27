/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sec_d_h_m_s.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 10:59:11 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 11:10:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int second;
	cout << "please entre the duration(seconds) : ";
	cin >> second;
	int s_d = 24*60*60;
	int s_h =60*60;
	int s_m = 60;
	float n_d = floor(second/s_d);
	float rem = second % s_d;
	float n_h = floor(rem/s_h);
	rem = second % s_h;
	float n_m = floor(rem/s_m);
	rem = second % s_m;
	int n_s= rem;
	cout << n_d << " : " << n_h << " : " << n_m << " : " << n_s << endl;

	return 0;

}
