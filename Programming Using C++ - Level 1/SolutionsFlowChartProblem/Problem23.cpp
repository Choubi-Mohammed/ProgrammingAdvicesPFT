/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem23.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 12:09:23 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 12:46:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int Readnbr(string msg)
{
	int nbr;
	cout << msg ;
	cin >> nbr;

	return nbr;
}

int sumUntil_99()
{
	int sum = 0;
	int counter = 1;
	int nbr = 0;
	do
	{
		nbr = Readnbr("enter number " + to_string(counter)+" : ");
		if(nbr == -99)
			break;
		sum = sum + nbr;
		counter++;
	}while(nbr != -99);
	return sum;
}

int main()
{
	cout << endl << sumUntil_99() << endl;


	return 0;
}
