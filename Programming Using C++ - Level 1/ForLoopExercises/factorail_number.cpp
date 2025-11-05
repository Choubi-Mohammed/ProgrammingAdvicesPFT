/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   factorail_number.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 16:55:36 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 17:03:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "please enter number to find factorail :";
	cin >> number;
	int factorail_number = 1;
	for(int i =number; i >= 1; i-- )
	{
		factorail_number = factorail_number * i;
	}
	cout << "The factorial of the given number is: " << factorail_number << endl;

	return 0;
}
