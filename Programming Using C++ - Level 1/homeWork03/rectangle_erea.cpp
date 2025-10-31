/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   rectangle_erea.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 09:40:28 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 09:43:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int rectangle_erea(int a,int b)
{
	int Erea = a * b;
	return Erea;
}

int main()
{
	int a,b;
	cout << "please entre the nbrs a,b; \n";
	cin >> a;
	cin >> b;
	cout << rectangle_erea(a,b) << endl;

	return 0;
}
