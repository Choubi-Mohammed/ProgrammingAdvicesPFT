/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem24.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 16:40:21 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 17:21:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum enPrim {Prim = 1,NotPrime = 2};

int ReadPosNbr()
{
	int nbr;
	do
	{
		cout << "entre a postive number :";
		cin >> nbr;
	}while(nbr <= 0);

	return nbr;
}

enPrim checkPrimeOrNot(int nbr)
{
	int Round = nbr / 2;
	int counter = 2;
	while(counter <= Round)
	{
		if(nbr % counter == 0)
			return enPrim::NotPrime;
		counter++;
	}
	return enPrim::Prim;
}

void PrintPrimOrNot(enPrim PON)
{
	if(PON == enPrim::Prim)
		cout << "\nIts Prime Number\n";
	else
		cout << "\nIts Not Prime Number\n";
}

int main()
{
	PrintPrimOrNot(checkPrimeOrNot(ReadPosNbr()));


	return 0;
}
