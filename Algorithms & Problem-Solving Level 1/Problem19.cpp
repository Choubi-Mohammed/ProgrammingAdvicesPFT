/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem19.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/24 19:45:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/24 21:10:22 by shobeedev            tfaaty fi l3oolaa   */
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

enum CharType {Letter = 1,CapLetter = 2,SpeChar = 3,Digit = 4};

char RandomChar(CharType type)
{
	switch(type)
	{
		case CharType::Letter :
			{
				return (char) RandomNumber(97,122);
				break;
			}
		case CharType::CapLetter :
			{
				return (char) RandomNumber(65,90);
				break;
			}
		case CharType::SpeChar :
			{
				return (char) RandomNumber(33,47);
				break;
			}
		case CharType::Digit :
			{
				return (char) RandomNumber(48,57);
				break;
			}
	}
	return '\0';
}

int main()
{
	srand((unsigned) time(NULL));
	cout << RandomChar(CharType::Letter) << endl;
	cout << RandomChar(CharType::CapLetter) << endl;
	cout << RandomChar(CharType::SpeChar) << endl;
	cout << RandomChar(CharType::Digit) << endl;

	return 0;
}

