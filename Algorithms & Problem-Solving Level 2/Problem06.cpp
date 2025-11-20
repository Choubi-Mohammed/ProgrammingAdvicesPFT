/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem06.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/20 17:35:59 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/20 18:04:17 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadN(int &number)
{
	cout << "please enter a number : ";
	cin >> number;
}

int ReversNumber(int number)
{
	int rem = 0;
	int nbr2 = 0;
	while(number > 0)
	{
		rem = number % 10;
		number = number / 10;
		nbr2 = nbr2 * 10 + rem;
	}
	return nbr2;
}

int main()
{
	int number;
	ReadN(number);
	cout << "\nReverse is : " << ReversNumber(number);


	return 0;
}

