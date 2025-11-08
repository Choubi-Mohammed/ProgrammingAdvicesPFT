/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_until_99.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 18:42:59 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 19:13:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr;
	int sum = 0;
	while(nbr != -99)
	{

		cout << "entry number : ";
		cin >> nbr;
		if(nbr != -99)
			sum = sum + nbr;
	}
	cout << "the sum of these numbers :" << sum << endl;

	return 0;
}
