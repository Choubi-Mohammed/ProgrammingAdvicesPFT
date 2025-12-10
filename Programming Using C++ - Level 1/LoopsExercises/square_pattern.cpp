/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   square_pattern.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 17:13:49 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:20:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
	cout << "Input the number of characters for a side: ";
	cin >> number;
}

void square_pattern(int number)
{
	char character = '#';
	int i = 1;
	while(i <= number)
	{
		int j = 1;
		while(j <= number)
		{
			cout << character;
			j++;
		}
		cout << '\n';
		i++;
	}
}
int main()
{
	int number;
	ReadNumber(number);
	square_pattern(number);

	return 0;
}
