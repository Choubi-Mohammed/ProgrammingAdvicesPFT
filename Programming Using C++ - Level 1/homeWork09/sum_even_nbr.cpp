/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_even_nbr.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 15:25:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 15:31:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr;
	cout << "please entre a number : ";
	cin >> nbr;
	while(nbr < 0)
	{
		cout << "please entre a positive number :";
		cin >> nbr;
	}

	int i = 1;
	int sum_even_nbr = 0;
	while(i <= nbr)
	{
		if(i % 2 == 0)
			sum_even_nbr = sum_even_nbr + i;
		i++;
	}
	cout << "the sum of even nbr is :" << sum_even_nbr << endl;

	return 0;
}
