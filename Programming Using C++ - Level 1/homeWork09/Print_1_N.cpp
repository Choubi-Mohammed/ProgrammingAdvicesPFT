/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Print_1_N.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 15:06:19 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 15:11:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int Number;
	cout << "please entre A  number : ";
	cin >> Number;
	while(Number < 0)
	{
		cout << "please entre a positive number : ";
		cin >> Number;
	}

	int i =1;
	while(i <= Number)
	{
		cout << i << "\n";
		i++;
	}

	return 0;
}
