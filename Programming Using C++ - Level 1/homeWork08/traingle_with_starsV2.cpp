/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   traingle_with_starsV2.cpp                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/08 09:52:18 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/08 09:55:34 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	for(int i =1;i<=10;i++)
	{
		for(int j = 10;j >=i;j--)
			cout << "*";
		cout << "\n";

	}
}
