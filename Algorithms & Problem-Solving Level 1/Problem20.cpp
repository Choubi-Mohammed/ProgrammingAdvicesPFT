/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem20.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/25 17:46:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/25 18:06:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;
int ReadNumber()
{
	int nbr;
	cout << "How many Keys Do you Want ? ";
	cin >> nbr;
	return nbr;
}
int RandomNumber(int from,int to)
{
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}

void PrintCapChar()
{
	int CapLetter = RandomNumber(65,90);
	cout << (char) CapLetter;
}

void Print4Char()
{
	int i = 1;
	while (i <= 4)
	{
		PrintCapChar();
		i++;
	}
}
void Key()
{
	int i = 1;
	while(i <= 4)
	{
		Print4Char();
		if (i != 4)
			cout << '-';
		i++;
	}
}
void GenerateKeys(int number)
{
	int i = 1;
	while(i <= number)
	{
		cout << "Key [" << i << "] : " ;
		Key();
		cout << endl;
		i++;
	}
}


int main()
{
	srand((unsigned) time(NULL));
	int number = ReadNumber();
	GenerateKeys(number);

	return 0;

}
