/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_even_nbr.cpp                                       |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/04 16:54:51 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/04 17:00:54 by shobeedev            tfaaty fi l3oolaa   */
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
	int sum_even_nbr = 0;
	for(int counter = 0;counter <= Number; counter++)
	{
		if(counter % 2 == 0)
		{
			sum_even_nbr = sum_even_nbr + counter;
			cout << counter << endl;
		}
	}
	return sum_even_nbr;
}
int main()
{
	int Number;
	ReadData(Number);
	cout << PrintData(Number) << endl;
}
