/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem14.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 17:04:24 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 17:11:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &nbr1,int &nbr2)
{
	cout << "entre a number 1 :";
	cin >> nbr1;
	cout << "entre a number 2 :";
	cin >> nbr2;
}

void swap(int &nbr1,int &nbr2)
{
	int tmp;

	tmp = nbr1;
	nbr1 = nbr2;
	nbr2 = tmp;
}

void Print(int nbr1,int nbr2)
{
	cout << "numbers before swaping : nbr1 = " << nbr1 << " ,nbr2 = " << nbr2 << endl;
	swap(nbr1,nbr2);
	cout << "numbers after swaping : nbr1 = " << nbr1 << " ,nbr2 = " << nbr2 << endl;
}

int main()
{
	int nbr1,nbr2;
	ReadNumber(nbr1,nbr2);
	Print(nbr1,nbr2);

	return 0;
}
