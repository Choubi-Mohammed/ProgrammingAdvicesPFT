/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pow_2_3_4.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/20 10:20:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/20 10:28:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr,pow2,pow3,pow4;
	cout << "please entre the number :";
	cin >> nbr;
	pow2 = nbr*nbr;
	pow3 = nbr * nbr * nbr;
	pow4 = nbr * nbr * nbr * nbr;

	cout << nbr << " power of 2 = " << pow2 << endl;
	cout << nbr << " power of 3 = " << pow3 << endl;
	cout << nbr << " power of 4 = " << pow4 << endl;

	return 0;
}
