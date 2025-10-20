/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_ITR.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 09:52:21 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 10:18:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int a,b;
	const float PI = 3.14;
	cout << "please entre a :";
	cin >> a;
	cout << "please entre b :";
	cin >> b;
	float erea = (PI*b*b/4)*(2*a-b)/(2*a+b);//((2*a-b)/(2*a+b)) hady ka t3tina res 0 its wrong !! rdo lbal.
	cout << "Circle Erea ITR is " << erea << endl;

	return 0;

}
