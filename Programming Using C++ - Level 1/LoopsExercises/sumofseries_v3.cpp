/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v3.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 15:40:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 15:52:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumebr(int &number)
{
	cout << "Input the value for nth term: ";
	cin >> number;
}

int series_v3(int number)
{
	int i = 1;
	int res = 0;
	while(i <= number)
	{
		res = res + i;
		cout << i;
		if(i != number)
			cout << "+";
		i++;
	}
	cout << " = " << res << endl;
	return res;
}

void sumofseries_v3(int number)
{
	int i = 1;
	int sum = 0;
	while(i <= number)
	{
		sum = sum + series_v3(i);
		i++;
	}
	cout << "The sum of the above series is: " << sum;
}

int main()
{
	int number;
	Readnumebr(number);
	sumofseries_v3(number);

	return 0;
}
