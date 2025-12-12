/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v7.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 19:04:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 19:15:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
using namespace std;

void ReadInt(int &number,int &x)
{
	cout << "Input the value of x: ";
	cin >> x;

	cout << "Input number of terms: ";
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

int tt_fact(int number)
{
	int i =1;
	int fact = 1;
	while(i <= number)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

void sumofseries_v7(int number,int x)
{
	int i =0;
	float sum = 0;
	while(i < number)
	{
		sum = sum + (float)tt_pow(x,i)/(float)tt_fact(i);
		i++;
	}
	cout << "The sum is : " << sum << endl;
}

int main()
{
	int number,x;
	ReadInt(number,x);
	sumofseries_v7(number,x);

	return 0;
}

