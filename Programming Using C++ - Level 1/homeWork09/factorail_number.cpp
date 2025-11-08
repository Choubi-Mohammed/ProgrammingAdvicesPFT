/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   factorail_number.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 15:36:11 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 15:40:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr;
	cout << "please entre a number :";
	cin >> nbr;
	while(nbr < 0)
	{
		cout << "please entre a positive number : ";
		cin >> nbr;
	}

	int i = nbr;
	int factorail_number = 1;
	while(i >= 1)
	{
		factorail_number = factorail_number * i;
		i--;
	}

	cout << "the factorail of number is : " << factorail_number << endl;


	return 0;
}
