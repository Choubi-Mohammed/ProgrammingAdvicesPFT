/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   rectangle_erea_Td.cpp                                  |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/26 20:08:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/26 20:11:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b;
	cout << "please entre the first nbr :";
	cin >> a;
	cout << "please entre the second nbr :";
	cin >> b;

	float res =a * sqrt(pow(b,2)-pow(a,2));
	cout << "Rectangle Erea Td :" << res << endl;



}
