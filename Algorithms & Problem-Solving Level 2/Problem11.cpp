/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem11.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 13:13:12 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 13:30:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;


void ReadNumber(int &number)
{
	cout << "Please enter number : ";
	cin >> number;
}

void Inverted_pattern(int number)
{
	cout << endl;
	int i = number;
	while(i >= 1)
	{
		int j = i;
		while(j >= 1)
		{
			cout << i;
			j--;
		}
		cout << endl;
		i--;
	}
}

int main()
{
	int number;
	ReadNumber(number);
	Inverted_pattern(number);

	return 0;
}
