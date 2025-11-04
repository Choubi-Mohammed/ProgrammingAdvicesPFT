/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_odd_nbr.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 18:39:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/04 16:53:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int &Number)
{
	cout << "please entre the Number :";
	cin >> Number;
}

int PrintData(int Number)
{
	int sum_odd_nbr = 0;
	for(int counter = 0;counter <= Number;counter++)
	{
		if(counter % 2 != 0)
			sum_odd_nbr = sum_odd_nbr +counter;
	}
	return sum_odd_nbr;
}

int main()
{
	int Number;
	ReadData(Number);
	cout << PrintData(Number) << endl;
	return 0;
}
