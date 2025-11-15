/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem19.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/15 10:22:11 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/15 10:51:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &nbr)
{
	cout << "entre a number :";;
	cin >> nbr;

}

int sumOddnbr_using_while(int nbr)
{
	int counter = 0;
	int sum = 0;
	cout << "\nusing while loop =>\n";
	while(counter < nbr)
	{
		if (counter % 2 != 0)
		{
			cout << counter << " " ;
			sum = sum + counter;
		}
		counter++;
	}
	cout << " => ";
	return sum;
}

int sumOddnbr_using_for(int nbr)
{
	int sum = 0;
	cout << "\nusing for loop =>\n";
	for(int i = 0;i < nbr;i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " ";
			sum = sum + i;
		}
	}
	cout << " => ";
	return sum;
}

int sumOddnbr_using_dowhile(int nbr)
{
	cout << "\nusing do while loop =>\n";
	int sum = 0;
	int counter = 0;
	do {
		if(counter % 2 != 0)
		{
			cout << counter << " ";
			sum = sum + counter;
		}
		counter++;
	}while(counter < nbr);
	cout << " => ";
	return sum;
}

int main()
{
	int nbr;
	ReadNumber(nbr);
	cout << sumOddnbr_using_while(nbr);
	cout << sumOddnbr_using_for(nbr);
	cout << sumOddnbr_using_dowhile(nbr);


	return 0;
}
