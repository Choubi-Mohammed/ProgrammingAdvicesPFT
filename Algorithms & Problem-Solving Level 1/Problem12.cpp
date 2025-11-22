/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem12.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 13:33:08 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 13:36:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadN(int &number)
{
	do
	{
		cout << "Please enter a number : ";
		cin >> number;
	}while(number < 0);
}

void PrintNumberPattern(int number)
{
	int i = 1;
	while (i <= number)
	{
		int j = 1;
		while(j <= i)
		{
			cout << i ;
			j++;
		}
		cout << endl;
		i++;
	}
}

int main()
{
	int number;
	ReadN(number);
	PrintNumberPattern(number);


	return 0;

}
