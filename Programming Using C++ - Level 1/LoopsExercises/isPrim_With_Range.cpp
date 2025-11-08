/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   isPrim_With_Range.cpp                                  |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/05 12:53:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/05 16:53:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int startNbr,endNbr;
	cout << "please entre startNbr :";
	cin >> startNbr;
	cout << "please entre endNbr :";
	cin >> endNbr;
	int counter = 0;
	cout << "the Prime number between " << startNbr << " and " << endNbr << " are : \n";
	for(int start = startNbr;start <= endNbr;start++)
	{
		if (start == 2)
		{
			counter = 1;
			cout << start << " ";
		}
		for(int startTwo = 2;startTwo < start; startTwo++ )
		{
			if(start % startTwo == 0)
				break;
			if(startTwo == start - 1)
			{
				cout << start << " ";
				counter++;
				break;
			}

		}
	}
	cout << "\nThe total number of prime numbers between " << startNbr << " and " << endNbr << " is :" << counter << endl;


}
