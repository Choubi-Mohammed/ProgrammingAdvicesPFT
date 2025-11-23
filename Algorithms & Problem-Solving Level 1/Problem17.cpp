/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem17.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/23 17:52:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/23 18:15:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readtxt(string &text)
{
	cout << "Please enter The text to Encrypted : ";
	getline(cin,text);
}

string EncryptionText(string text)
{
	string Word = "";
	int i = 0;
	int letter;
	while(text[i])
	{
		letter = text[i] + 2;
		Word = Word + char  (letter);
		i++;
	}
	return Word;
}
string DecryptionText(string text)
{
	string Word =  "";
	int i = 0;
	int letter;
	while(text[i])
	{
		letter = text[i] - 2;
		Word = Word + (char)letter;
		i++;
	}
	return Word;
}

int main()
{
	string text;
	Readtxt(text);
	cout << "\nText Before Encryption : " << text << endl;
	cout << "Text After Encryption : "<< EncryptionText(text) << endl;
	cout << "Text After Decryption : " << DecryptionText(EncryptionText(text)) << endl;


	return 0;
}

