/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Cube_of_Numbers.cpp                                    |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/10 17:23:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 17:29:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void ReadNumber(int &number)
{
	cout << "Input the number of terms : ";
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

void Cube_of_Numbers(int number)
{
	int i = 1;
	while(i <= number)
	{
		cout << "Number is : " << i << " and the cube of " << i << " is: " << tt_pow(i,3) << endl;
		i++;
	}
}
int main()
{
	int number;
	ReadNumber(number);
	Cube_of_Numbers(number);

	return 0;
}
