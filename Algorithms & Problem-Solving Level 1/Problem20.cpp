/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem20.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/25 17:46:39 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/25 18:41:22 by shobeedev            tfaaty fi l3oolaa   */
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
enum CharType {Letter = 1, CapLetter = 2,SpeChar = 3,Digit = 4};
char RandChar(CharType type)
{
	switch(type)
	{
		case CharType::Letter:
			{
				return (char) RandomNumber(97,122);
				break;
			}
		case CharType::CapLetter :
			{
				return (char) RandomNumber(65,90);
				break;
			}
		case CharType::SpeChar:
			{
				return (char) RandomNumber(33,63);
				break;
			}
		case CharType::Digit:
			{
				return (char) RandomNumber(48,57);
				break;
			}
	}
	return '\0';
}
string GenerateWord(CharType type,int len)
{
	string Word = "";
	int i = 1;
	while(i <= len)
	{
		Word = Word + RandChar(type);
		i++;
	}
	return Word;
}

void GenerateKey()
{
	cout << GenerateWord(CharType::CapLetter,5) + "-";
	cout << GenerateWord(CharType::CapLetter,5) + "-";
	cout << GenerateWord(CharType::CapLetter,5) + "-";
	cout << GenerateWord(CharType::CapLetter,5);
}

void NumberOfKeys(int number)
{
	int i = 1;
	while(i <= number)
	{
		cout << "Key [" << i <<  "] : ";
		GenerateKey();
		cout <<  endl;
		i++;
	}

}
int main()
{
	srand((unsigned) time(NULL));
	int number = ReadNumber();
	NumberOfKeys(number);

	return 0;

}
