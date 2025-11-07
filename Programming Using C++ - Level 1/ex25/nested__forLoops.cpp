/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   nested__forLoops.cpp                                   |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/07 18:10:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/07 18:14:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	for(int i = 1;i <= 10;i++)
	{
		cout << "i = " << i << endl;
		for(int j = 1; j <= 10;j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << "--------------------------------\n";
	}

	return 0;
}
