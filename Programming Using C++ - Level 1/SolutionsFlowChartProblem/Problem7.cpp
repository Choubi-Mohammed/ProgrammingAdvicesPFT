/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem7.cpp                                           |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/13 17:10:46 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/13 17:15:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
int ReadNbr()
{
	int nbr;
	cout << "entre a number :";
	cin >> nbr;

	return nbr;
}

float calcHalfnbr(int nbr)
{
	return (float) nbr / 2;
}

void Print(int number)
{
	cout << "half of number " << number << " is " << calcHalfnbr(number)  << endl;
}
int main()
{
	Print(ReadNbr());


	return 0;
}
