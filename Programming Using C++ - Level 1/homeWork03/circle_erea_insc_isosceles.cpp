/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_insc_isosceles.cpp                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:33:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 10:38:59 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float circle_erea_insc_isosceles(int a,int b)
{
	const float PI = 3.14;
	float Erea = PI * (pow(b,2)/4) * (2*a-b)/(2*a+b);
	return Erea;
}

int main()
{
	int a,b;
	cout << "please entre a,b : \n";
	cin >> a;
	cin >> b;
	cout << circle_erea_insc_isosceles(a,b) << endl;

	return 0;
}
