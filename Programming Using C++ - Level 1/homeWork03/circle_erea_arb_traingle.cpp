/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_arb_traingle.cpp                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:40:40 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 10:48:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

float circle_erea_arb_traingle(int a,int b,int c)
{
	float q = (a+b+c)/2;
	const float PI = 3.14;
	float Erea = PI * pow(((a * b*c)/(4*sqrt(q*(q-a)*(q-b)*(q-c)))),2);
	return Erea;
}

int main()
{
	int a,b,c;
	cout << "please etre a,b,c :";
	cin >> a;
	cin >> b;
	cin >> c;
	cout << circle_erea_arb_traingle(a,b,c) << endl;
	return 0;
}
