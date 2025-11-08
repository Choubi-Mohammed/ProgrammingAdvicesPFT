/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Display_n_TermsOfNbr.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/04 17:37:45 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/04 17:42:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int number;
	int sumOfNumber = 0;
	cout << "please entre a number of terms :";
	cin >> number;
	cout << "the natural number upto " << number << "th termse are :\n";
	for(int i = 1;i <= number;i++)
	{
		cout << i << " ";
		sumOfNumber = sumOfNumber + i;
	}
	cout << "\nthe sum of natural number is : " << sumOfNumber << endl;

	return 0;
}
