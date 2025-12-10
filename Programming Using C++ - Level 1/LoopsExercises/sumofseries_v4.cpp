/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v4.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 16:05:49 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 16:39:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumbers(int &x,int &number)
{
	cout << "Input the value of X: ";
	cin >> x;
	cout << "Input the value for nth term: ";
	cin >> number;
}

int tt_FactorailN(int number)
{
	int i = 1;
	int fact = 1;
	if(number == 0)
		return fact;
	while(i <= number)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

int tt_pow(int base,int exp)
{
	int i = 1;
	int pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}
float series_v4(int x,int term,int number)
{
	float res = ((float)tt_pow(x,term) / (float)tt_FactorailN(term)) * tt_pow(-1,number-1);
	cout << "term " << number << "value is: " << res << endl;
	return res;
}

void sumofseries_v4(int x,int number)
{
	int term = 0;
	int i = 1;
	float sum = 0;
	while(i <= number)
	{
		sum = sum + series_v4(x,term,i);
		i++;
		term = term + 2;
	}
	cout << "The sum of the above series is: " << sum  << endl;
}

int main()
{
	int x,number;
	ReadNumbers(x,number);
	sumofseries_v4(x,number);

	return 0;
}
