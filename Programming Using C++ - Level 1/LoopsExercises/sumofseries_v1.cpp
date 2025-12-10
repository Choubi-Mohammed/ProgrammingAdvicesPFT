/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v1.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 14:59:42 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 15:26:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void Readnumber(int &number)
{
	cout << "Input the value for nth term : ";
	cin >> number;
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

double series_v1(int number)
{
	double series = 1/(double)tt_pow(number,number);
	cout << "1/" << number << "^" << number << " = " << series << endl;
	return (double)series;
}
void sumofseries_v1(int number)
{
	int i = 1;
	double sum = 0;
	while(i <= number)
	{
		sum = sum + series_v1(i);
		i++;
	}
	cout << "The sum of the above series is: " << sum << endl;
}
int main()
{
	int number;
	Readnumber(number);
	sumofseries_v1(number);


	return 0;
}
