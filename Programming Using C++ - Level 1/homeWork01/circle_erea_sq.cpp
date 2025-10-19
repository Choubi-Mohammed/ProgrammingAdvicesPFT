/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   circle_erea_sq.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 18:37:33 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 18:41:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int main()
{
	int a;
	const float PI = 3.14;


	cout << "please enter a  :";
	cin >> a;
	float Erea = PI * ((a/2) * (a/2));
	cout << "Circle Erea Squere is " << Erea << endl;

	return 0;
}
