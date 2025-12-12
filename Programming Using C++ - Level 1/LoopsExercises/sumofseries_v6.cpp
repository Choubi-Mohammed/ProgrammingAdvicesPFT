/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v6.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 18:31:56 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 19:02:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void readnumber(int &number)
{
	cout << "Input number of terms: ";
	cin >> number;
}

void sumofseries_v6(int number)
{
	int numberseries = 9;
	int i = 1;
	int sum = 0;
	cout << "[ ";
	while(i<= number)
	{
		sum = sum + numberseries;
		cout << numberseries;
		if(i != number)
			cout << " + ";
		numberseries = numberseries * 10 + 9;
		i++;
	}
	cout << " ]\n";
	cout << "The sum of the sarise = " << sum << endl;
}
int main()
{
	int number;
	readnumber(number);
	sumofseries_v6(number);

	return 0;
}
