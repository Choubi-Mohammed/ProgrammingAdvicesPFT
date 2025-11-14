/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem12.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 16:49:41 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 16:57:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void  ReadNumber(int &nbr1,int &nbr2)
{
	cout << "entre a number 1: ";
	cin >> nbr1;
	cout << "entre a number 2: ";
	cin >> nbr2;
}

int MaxOfTwonbrs(int nbr1,int nbr2)
{
	if (nbr1 > nbr2)
		return nbr1;
	else
		return nbr2;
}

void Print(int max)
{
	cout << "\n Max Of Two Numbers is : " << max << endl;
}

int main()
{
	int nbr1,nbr2;
	ReadNumber(nbr1,nbr2);
	Print(MaxOfTwonbrs(nbr1,nbr2));

	return 0;
}
