/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem11.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 10:52:53 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 11:56:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
enum enPF {Pass = 1,Fail = 2};

void ReadNumbers(int &nbr1,int &nbr2,int &nbr3)
{
	cout << "entre mark 1 :";
	cin >> nbr1;
	cout << "entre mark 2 :";
	cin >> nbr2;
	cout << "entre mark 3 :";
	cin >> nbr3;
}

int sumofmarks(int nbr1,int nbr2, int nbr3)
{
	return nbr1+nbr2+nbr3;
}

float avgofmarks(int total)
{
	return (float) total/3;
}

enPF checkavg(float avg)
{
	if(avg >= 50)
		return enPF::Pass;
	else
		return enPF::Fail;
}

void Print(enPF PF)
{
	if(PF == enPF::Pass)
		cout << "\nYou Passed.\n";
	else
		cout << "\nYou Missed.\n";
}
int main()
{
	int nbr1,nbr2,nbr3;
	ReadNumbers(nbr1,nbr2,nbr3);
	Print(checkavg(avgofmarks(sumofmarks(nbr1,nbr2,nbr3))));


	return 0;
}
