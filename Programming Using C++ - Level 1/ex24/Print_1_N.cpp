/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Print_1_N.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 17:57:58 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 18:18:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadNumber(int &Number)
{
	cout << "please entre number : ";
	cin >> Number;
}

void Print_1_N(int Number)
{
	for(int i = 1; i <= Number;i++)
	{
		cout << i << endl;
	}
}

int main()
{
	int Number;
	ReadNumber(Number);
	Print_1_N(Number);

	return 0;
}
