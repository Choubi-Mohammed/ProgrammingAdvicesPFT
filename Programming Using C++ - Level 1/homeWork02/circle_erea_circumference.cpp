/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_circumference.cpp                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 10:05:18 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 10:12:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int l;
	const float PI = 3.14;
	cout << "please entre the number :";
	cin >> l;
	float res = pow(l,2)/(4*PI);
	cout << "the res is : " << res << endl;
	return 0;

}
