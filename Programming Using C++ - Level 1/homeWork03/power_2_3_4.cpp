/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   power_2_3_4.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:51:17 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 10:55:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void power_2_3_4(int nbr)
{
	cout << "power of 2 => " << nbr * nbr << endl;
	cout << "power of 3 => " << nbr*nbr*nbr << endl;
	cout << "power of 4 => " << nbr*nbr*nbr*nbr << endl;
}

int main()
{
	int nbr;
	cout << "please entre nbr :";
	cin >> nbr;
	power_2_3_4(nbr);


	return 0;
}
