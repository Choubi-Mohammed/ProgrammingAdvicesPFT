/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   do_while.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/09 17:14:58 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/09 17:24:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadNbrWithWhile(int from,int to)
{
	int nbr;
	cout << "please entre a number between " << from << " to " << to << endl;
	cin >> nbr;
	while(nbr < from || nbr > to)
	{
		cout << "please entre a nbr between " << from << " to " << to << endl;
		cin >> nbr;
	}
	return nbr;
}

int ReadNbrWithDoWhile(int from,int to)
{
	int nbr;
	do{
		cout << "please entre a number between " << from << " to " << to << endl;
		cin >>nbr;
	}while(nbr < from || nbr > to);
	return nbr;
}
int main()
{
	cout << ReadNbrWithDoWhile(1,10);
	cout << ReadNbrWithWhile(1,10);
}
