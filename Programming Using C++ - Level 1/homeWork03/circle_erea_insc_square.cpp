/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_insc_square.cpp                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:14:24 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 10:18:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float circle_erea_insc_square(int a)
{
	const float PI = 3.14;
	float Erea = (PI * pow(a,2))/4;
	return Erea;
}

int main()
{
	int a;
	cout << "please entre a :";
	cin >> a;

	cout << circle_erea_insc_square(a) << endl;
	return 0;
}

