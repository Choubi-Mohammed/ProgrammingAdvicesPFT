/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem17.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/23 17:52:00 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/23 19:56:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readtxt(string &text)
{
	cout << "Please enter The text to Encrypted : ";
	getline(cin,text);
}

string EncryptionText(string text,short EncryptionKey)
{
	int len = 0;
	while(text[len])//length of string
		len++;
	int i = 0;
	while(i < len)
	{
		text[i] = char((int) text[i] + EncryptionKey);
		i++;
	}
	return text;
}
string DecryptionText(string text,short EncryptionKey)
{
	int len = 0;
	while(text[len])
		len++;
	int i = 0;
	//its main while the string not equel to null, null always in the last char in string
	while(i < len)
	{
		text[i] = char ((int)text[i] - EncryptionKey);
		i++;
	}
	return text;
}

int main()
{
	string text;
	short EncryptionKey = 2;
	Readtxt(text);
	string EncryptionTextST = EncryptionText(text,EncryptionKey);
	string DecryptionTextST = DecryptionText(EncryptionTextST,EncryptionKey);
	cout << "\nText Before Encryption : " << text << endl;
	cout << "Text After Encryption : "<< EncryptionTextST << endl;
	cout << "Text After Decryption : " << DecryptionTextST << endl;


	return 0;
}

