/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem15.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 18:28:06 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/22 18:52:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void PrintAllWordsFromAAA_ZZZ()
{
	int i = 65;
	while(i <= 90)
	{
		int j = 65;
		while(j<=90)
		{
			int k = 65;
			while(k <= 90)
			{
				cout << (char)i << (char)j <<(char) k << endl;//casting
				k++;
			}
			j++;
		}
		i++;
	}
}
int main()
{
	PrintAllWordsFromAAA_ZZZ();

	return 0;

}
