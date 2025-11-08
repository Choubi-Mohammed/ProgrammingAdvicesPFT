/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   numbers.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 09:56:52 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 10:02:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	for(int i = 10;i >= 1;i--)
	{
		for(int j = 1;j <= i;j++)
			cout << j << " ";
		cout << "\n";
	}
}
