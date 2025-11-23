/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem16.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/22 19:15:02 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/23 17:38:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadPassWord(string &Pass)
{
	cout << "Please Guess 3 letters PassWord : ";
	cin >> Pass;
}
void Guess_3_lett_pass(string PassWord)
{
	string Word = "";
	int i = 65;
	int counter = 0;
	while(i <= 90)
	{
		int j = 65;
		while(j <= 90)
		{
			int k = 65;
			while(k <= 90)
			{
				counter++;
				Word = Word + (char)i;
				Word = Word + (char)j;
				Word = Word + (char)k;
				cout << "Trail[" << counter << "] : " << Word << endl;

				if(Word == PassWord)
				{
					cout << "Password is " << Word << endl;
					cout << "Found after " << counter << " Trail(s)."<< endl;
					return;
				}
				Word = "";
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	string Password;
	ReadPassWord(Password);
	Guess_3_lett_pass(Password);



	return 0;
}
