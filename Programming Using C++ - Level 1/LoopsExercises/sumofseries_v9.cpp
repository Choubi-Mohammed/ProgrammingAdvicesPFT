/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v9.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 19:49:29 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 19:55:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadN(int &N)
{
	cout << "Input number of terms: ";
	cin >> N;
}

void sumofseries_v9(int number)
{
	int nfseries_v9 = 1;
	int sum = 0;
	int i =1;
	cout << "[ " ;
	while(i <= number)
	{
		cout << nfseries_v9;
		sum = sum + nfseries_v9;
		if(i != number)
			cout << " + ";
		nfseries_v9 = 10 * nfseries_v9 + 1;
		i++;
	}
	cout << " ]\n";
	cout << "The sum of the series is: " << sum << endl;
}

int main()
{
	int number;
	ReadN(number);
	sumofseries_v9(number);

	return 0;
}
