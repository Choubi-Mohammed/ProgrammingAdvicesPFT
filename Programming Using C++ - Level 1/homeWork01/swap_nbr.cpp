/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   swap_nbr.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/19 18:13:08 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/19 18:19:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr1,nbr2,temp;
	cout << "please entre the Numbers1 :";
	cin >> nbr1;
	cout << "please entre the Numbers2 :";
	cin >> nbr2;

	cout << "the Numbers before swaping them Numbers1 = " << nbr1 << " ,Numbers2 = " << nbr2 << endl;
	temp = nbr1;
	nbr1 = nbr2;
	nbr2 = temp;
	cout << "the Numbers after swaping them Numbers1 = " << nbr1 << " ,Numbers2 = " << nbr2 << endl ;
}
