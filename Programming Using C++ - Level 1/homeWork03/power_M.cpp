/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   power_M.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 10:56:35 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 11:01:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

int power_M(int nbr, int M)
{
	int res = pow(nbr,M);
	return res;
}

int main()
{
	int nbr,m;
	cout << "please enter nbr and M :\n";
	cin >> nbr;
	cin >> m;
	cout << power_M(nbr,m) << endl;
	return 0;
}
