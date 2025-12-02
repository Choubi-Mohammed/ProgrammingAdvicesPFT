/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem32.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/02 21:41:11 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/02 22:15:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType
{
	Letters = 1,
	CapLetters = 2,
	SpeChar = 3,
	Digit = 4
};

int RetLen()
{
	int len;
	cout << "Please enter the Length : ";
	cin >> len;

	return len;
}

int randomNumbers(int from,int to)
{
	int randomNumbers = rand() % (to - from - 1) + from;
	return randomNumbers;
}

char RetChar(enCharType type)
{
	switch(type)
	{
		case enCharType::Letters:
		{
			return (char)randomNumbers(97,122);
			break;
		}
		case enCharType::CapLetters:
		{
			return (char)randomNumbers(65,90);
			break;
		}
		case enCharType::SpeChar:
		{
			return (char)randomNumbers(33,63);
			break;
		}
		case enCharType::Digit:
		{
			return (char)randomNumbers(48,57);
			break;
		}
	}
	return '\0';
}

string GenerateWord(enCharType CharType,int len)
{
	string word = "";
	int i = 1;
	while(i <= len)
	{
		word = word + RetChar(CharType);
		i++;
	}
	return word;
}

string Generatekey()
{
	string Key;
	Key = GenerateWord(enCharType::CapLetters,4) + '-';
	Key = Key + GenerateWord(enCharType::CapLetters,4)+'-';
	Key = Key + GenerateWord(enCharType::CapLetters,4)+'-';
	Key = Key + GenerateWord(enCharType::CapLetters,4);

	return Key;
}

void FillArrWithkeys(string arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = Generatekey();
		i++;
	}
}

void PrintArr(string arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		cout << "Arr[" << i+1 << "] : " << arr[i] << endl;
		i++;
	}
}


int main()
{
	srand((unsigned)time(NULL));
	string arr[100];
	int len =RetLen();

	FillArrWithkeys(arr,len);
	cout << endl;
	PrintArr(arr,len);

	return 0;
}
