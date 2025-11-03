/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Print_N_1.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 18:20:27 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 18:36:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &Number)
{
	cout << "Please entre Number :";
	cin >> Number;
}

void Print_N_1(int Number)
{
	for(int i = Number; i >= 1;i--)
	{
		cout << i << endl;
	}
}
int main()
{
	int Number;
	ReadNumber(Number);
	Print_N_1(Number);

	return 0;
}
