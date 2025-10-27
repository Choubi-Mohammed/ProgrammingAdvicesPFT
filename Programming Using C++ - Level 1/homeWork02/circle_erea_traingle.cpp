/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_traingle.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 10:13:52 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 10:23:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a,b;
	const float PI = 3.14;
	cout << "please entre the first number is :";
	cin >> a;
	cout << "please entre the second number is :";
	cin >> b;
	float res = PI * (pow(b,2)/4)*(2*a-b)/(2*a+b);
	cout << "the res is : " << res << endl;
	return 0;



}
