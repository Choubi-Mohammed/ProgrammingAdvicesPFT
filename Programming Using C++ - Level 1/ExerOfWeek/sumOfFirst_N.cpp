/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumOfFirst_N.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/16 16:44:48 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/16 16:50:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int ReadN()
{
	int nbr;
	cout << "enter a number :";
	cin >> nbr;


	return nbr;
}

int sumOfFirst_N(int nbr)
{
	int sum = 0;
	int counter = 1;
	while(counter <= nbr)
	{
		cout << counter << " ";
		sum = sum + counter;
		counter++;
	}
	return sum;
}
void Print(int sum)
{
	cout << "\nthe sum is : " << sum << endl;
}

int main()
{
	Print(sumOfFirst_N(ReadN()));

	return 0;
}
