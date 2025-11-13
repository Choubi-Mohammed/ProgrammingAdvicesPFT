/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem9.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/13 17:35:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/13 17:43:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(int &nbr1,int &nbr2,int &nbr3)
{
	cout << "entre nbr 1 :";
	cin >> nbr1;
	cout << "entre nbr 2 :";
	cin >> nbr2;
	cout << "entre nbr 3 :";
	cin >> nbr3;
}

int Sumof3nbrs(int nbr1,int nbr2,int nbr3)
{
	return nbr1 + nbr2 + nbr3;
}

void Print(int total)
{
	cout << "the total of these 3 nbrs is " << total << endl;
}

int main()
{
	int nbr1,nbr2,nbr3;
	ReadNumbers(nbr1,nbr2,nbr3);
	Print(Sumof3nbrs(nbr1,nbr2,nbr3));


	return 0;
}
