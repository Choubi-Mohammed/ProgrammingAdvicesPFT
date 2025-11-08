/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   letter_nestedLoopaV3.cpp                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 10:17:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 10:30:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	for(int i = 90;i >=65;i--)
	{
		for(int j = 65;j <= i;j++)
			cout << (char) j << " ";
		cout << "\n";
	}

}
