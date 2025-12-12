/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumOfEvenNumber.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 17:56:21 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 18:06:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void Readinteger(int &number)
{
	cout <<"Input number of terms: ";
	cin >> number;
}

void sumOfEvenNumber(int number)
{
	int i =1;
	int sum = 0;
	int j= 1;
	cout << "The even numbers are: ";
	while(i <= number)
	{
		if(j  % 2 == 0)
		{
			cout << j << " ";
			sum = sum + j;
			i++;
		}
		j++;
	}
	cout << "\nThe Sum of even Natural Numbers upto "<< number << " terms: " << sum << endl;
}
int main()
{
	int number;
	Readinteger(number);
	sumOfEvenNumber(number);

	return 0;
}
