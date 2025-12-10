/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v2.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 15:29:32 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 15:35:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnumber(int &number)
{
	cout << "Input the value for nth term: ";
	cin >> number;
}
int series_v2(int number)
{
	int res = number * number;
	cout << number << "*" << number << " = " << res << endl;
	return res;
}
void sumofseries_v2(int number)
{
	int i = 1;
	int sum = 0;
	while(i <= number)
	{
		sum = sum + series_v2(i);
		i++;
	}
	cout << "The sum of the above series is: " << sum << endl;
}

int main()
{
	int number ;
	Readnumber(number);
	sumofseries_v2(number);

	return 0;
}
