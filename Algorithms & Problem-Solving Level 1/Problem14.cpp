/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem14.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 18:01:58 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 18:13:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &number)
{
	do
	{
		cout << "Please enter a Positive Number : ";
		cin >> number;
	}while(number < 0);
}

void LetterPattern(int number)
{
	cout << endl;
	int i = 65;
	while(i <= 65 + number - 1)
	{
		int j = 1;
		while(j <= number - (65 + number - 1 - i))
		{
			cout << (char) i;
			j++;
		}
		cout << endl;
		i++;
	}

}

int main()
{
	int number;
	ReadNumber(number);
	LetterPattern(number);

	return 0;
}


