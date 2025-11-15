/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem21.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 11:19:45 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 11:34:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &nbr)
{
	cout << "please entre numberr :";
	cin >> nbr;
}

int factorailNbr_while(int nbr)
{
	cout << "\nusin while loop => \n";
	int fact = 1;
	int counter = 1;
	while(counter <= nbr)
	{
		cout << counter << "*" ;
		fact = fact * counter;
		counter++;
	}
	cout << " => ";
	return fact;
}
int factorailNbr_for(int nbr)
{
	cout << "\nusing for loop => \n";
	int fact = 1;
	for(int i =1;i <= nbr;i++)
	{
		cout << i << "*";
		fact = fact * i;
	}
	cout << " => ";
	return fact;
}

int factorailNbr_dowhile(int nbr)
{
	cout << "\nusing do while loop => \n";
	int fact =1;
	int counter = 1;
	do
	{
		cout << counter << "*";
		fact =fact * counter;
		counter++;
	}while(counter <= nbr);
	cout << " => ";
	return fact;
}

int main()
{
	int nbr;
	Readnumber(nbr);
	cout << factorailNbr_while(nbr) << endl;
	cout << factorailNbr_for(nbr) << endl;
	cout << factorailNbr_dowhile(nbr) << endl;




	return 0;
}
