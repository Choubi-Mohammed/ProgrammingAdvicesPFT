/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   pow.cpp                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 18:34:05 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 18:40:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int nbr,M;
	cout << "please entre a number :";
	cin >> nbr;
	cout << "please entre a M :";
	cin >> M;
	int i = 1;
	int pow = 1;
	while(i <= M)
	{
		pow = pow * nbr;
		i++;
	}
	cout << nbr << "power of " << M << " = " << pow << endl;
}
