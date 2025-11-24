/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem19.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/24 19:45:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/24 19:58:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}

void PrintRanLetter()
{
	int Letter = RandomNumber(97,122);
	cout << (char)Letter << endl;//casting
}
void PrintRanCapLetter()
{
	int CapLtetter = RandomNumber(65,90);
	cout << (char) CapLtetter << endl;
}
void PrintRanSpecChar()
{
	int SpecChar = RandomNumber(33,126);
	cout << (char) SpecChar<< endl;
}
void PrintRanDigit()
{
	cout << RandomNumber(1,10);
}
int main()
{
	srand((unsigned) time(NULL));
	PrintRanLetter();
	PrintRanCapLetter();
	PrintRanSpecChar();
	PrintRanDigit();

	return 0;
}

