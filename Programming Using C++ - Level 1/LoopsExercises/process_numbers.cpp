/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   process_numbers.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 16:47:40 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:00:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &number)
{
	cout << "Number of positive integers is: ";
	cin >> number;
}

void process_numbers(int number)
{
	Readnumber(number);
	int i = 1;
	int max= number;
	int min = number;
	int sum = 0;
	float avg = 0;

	while(number != -99)
	{
		Readnumber(number);
		if(number == -99)
			break;
		sum = sum + number;
		if(max <= number)
			max = number;
		if (min >= number)
			min = number;
		i++;
	}
	avg = sum / i;
	cout << "The maximum value is: " << max << endl
		 << "The minimum value is: " << min << endl
		 << "The average is:       " << avg << endl;
}

int main()
{
	int number;
	process_numbers(number);

	return 0;
}

