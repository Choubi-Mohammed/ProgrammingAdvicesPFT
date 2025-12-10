/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Multiplication_Table.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 17:33:04 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:41:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &number)
{
	cout << "Input the number upto: ";
	cin >> number;
}

void Multiplication_Table(int number)
{
	int i = 1;
	cout << "Multiplication Table From 1 to " << number << endl;
	while(i <= 10)
	{
		int j = 1;
		while(j <= number)
		{
			cout << i << "*" << j << "=" << i*j << '\t';
			j++;
		}
		cout << endl;
		i++;
	}
}
int main()
{
	int number;
	Readnumber(number);
	Multiplication_Table(number);

	return 0;
}
