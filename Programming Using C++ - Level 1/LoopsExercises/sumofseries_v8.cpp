/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v8.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 19:19:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 19:47:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &number,int &x)
{
	cout << "Input the value of x: ";
	cin >> x;
	cout << "Input number of terms: ";
	cin >> number;
}

int tt_pow(int base,int exp)
{
	int i =1;
	int pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}

void sumofseries_v8(int number,int x)
{
	int i =1;
	int series_v8 = 0;
	int sum = 0;
	int j = 1;
	while(i <= number)
	{
		if(j % 2 != 0)
		{
			series_v8 = tt_pow(x,j) * tt_pow(-1,i-1);
			cout << series_v8 << endl;
			sum = sum + series_v8;
			i++;
		}
		j++;
	}
	cout << "The sum of the series upto "<< number << " term is: " << sum << endl;
}
int main()
{
	int number,x;
	Readnumber(number,x);
	sumofseries_v8(number,x);

	return 0;
}
