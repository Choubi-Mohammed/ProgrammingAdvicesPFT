/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem10.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/13 17:35:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/13 17:48:21 by shobeedev            tfaaty fi l3oolaa   */
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
float avg3nbrs(int nbr1,int nbr2, int nbr3)
{
	return (float)(Sumof3nbrs(nbr1,nbr2,nbr3) / 3);
}
void Print(float avg)
{
	cout << "the avrage of these 3 nbrs is " << avg << endl;
}

int main()
{
	int nbr1,nbr2,nbr3;
	ReadNumbers(nbr1,nbr2,nbr3);
	Print(avg3nbrs(nbr1,nbr2,nbr3));


	return 0;
}
