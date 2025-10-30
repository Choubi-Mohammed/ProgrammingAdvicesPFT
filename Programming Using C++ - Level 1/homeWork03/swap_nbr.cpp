/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   swap_nbr.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/30 17:22:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/30 17:46:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

void swap_nbr(int nbr1,int nbr2)
{
	int tmp;
	tmp = nbr1;
	nbr1 = nbr2;
	nbr2 = tmp;
	cout << nbr1 << "," << nbr2 << endl;
}

int main()
{
	int nbr1,nbr2;
	cout << "please entre the numbers :\n";
	cin >> nbr1;
	cin >> nbr2;
	swap_nbr(nbr1,nbr2);

	return 0;
}


