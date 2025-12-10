/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumOfOddNumber.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 17:42:01 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:54:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &num)
{
	cout << "Input number of terms: ";
	cin >> num;
}

void sumOfOddNumber(int number)
{
	int  i =1;
	int j = 1;
	int sum = 0;
	cout << "The odd numbers are: ";
	while(i <= number)
	{
		if(j % 2 != 0)
		{
			cout << j << " ";
			sum = sum + j;
			i++;
		}
		j++;
	}
	cout << "\nThe Sum of odd Natural Numbers upto "<< number<< " terms: " << sum << endl;
}
int main()
{
	int number;
	ReadNumber(number);
	sumOfOddNumber(number);

	return 0;

}

