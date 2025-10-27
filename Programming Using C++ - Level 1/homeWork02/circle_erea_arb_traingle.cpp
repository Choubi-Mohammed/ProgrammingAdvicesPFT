/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_arb_traingle.cpp                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/27 10:28:17 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/27 10:38:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c;
	const float PI = 3.14;
	cout << "please entre the numbers a,b,c : \n";
	cin >> a;
	cin >> b;
	cin >> c;

	float q = (a+b+c)/2;
	float res = PI * pow(((a*b*c)/(4*sqrt(q*(q-a)*(q-b)*(q-c)))),2);

	cout << "the res is : " << res << endl;


	return 0;


}
