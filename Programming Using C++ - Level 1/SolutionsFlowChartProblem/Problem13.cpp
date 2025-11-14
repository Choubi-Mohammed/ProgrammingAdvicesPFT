/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem13.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 16:49:41 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 17:02:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void  ReadNumber(int &nbr1,int &nbr2,int &nbr3)
{
	cout << "entre a number 1: ";
	cin >> nbr1;
	cout << "entre a number 2: ";
	cin >> nbr2;
	cout << "entre a number 3: ";
	cin >> nbr3;
}

int MaxOfTwonbrs(int nbr1,int nbr2,int nbr3)
{
	if (nbr1 > nbr2 && nbr1 > nbr3)
		return nbr1;
	else if (nbr2 > nbr1 && nbr2 > nbr3)
		return nbr2;
	else
		return nbr3;
}

void Print(int max)
{
	cout << "\n Max Of Three Numbers is : " << max << endl;
}

int main()
{
	int nbr1,nbr2,nbr3;
	ReadNumber(nbr1,nbr2,nbr3);
	Print(MaxOfTwonbrs(nbr1,nbr2,nbr3));

	return 0;
}
