/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_odd_nbr.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 15:17:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 15:24:47 by shobeedev            tfaaty fi l3oolaa   */
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
	int i = 1;
	int sum_odd_nbr = 0;
	while(i <= nbr)
	{
		if (i % 2 != 0)
			sum_odd_nbr = sum_odd_nbr + i;
		i++;
	}

	cout << "the sum of odd nbrs is : " << sum_odd_nbr << endl;

	return 0;
}
