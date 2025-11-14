/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem18.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 19:37:22 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 19:50:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadNumber()
{
	int nbr;
	cout << "please entre number :";
	cin >> nbr;

	return nbr;
}

void Print_N_to_1_for(int nbr)
{
	cout << "\nusing for loop \n";
	for(int i = nbr;i > 0;i--)
		cout << i << " ";
}
void Print_N_to_1_while(int nbr)
{
	cout << "\nusing while loop\n";
	int counter = nbr;
	while(counter > 0)
	{
		cout << counter << " ";
		counter--;
	}
}
void Print_N_to_1_dowhile(int nbr)
{
	cout << "\nusing do while loop\n";
	int counter = nbr;

	do
	{
		cout << counter << " ";
		counter--;
	}while(counter > 0);
}

int main()
{
	int N = ReadNumber();
	Print_N_to_1_while(N);
	Print_N_to_1_for(N);
	Print_N_to_1_dowhile(N);


	return 0;
}
