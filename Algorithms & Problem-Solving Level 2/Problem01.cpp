/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem01.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/18 17:20:09 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/18 19:28:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

//Multiplication table from 1 to 10
#include <iostream>
using namespace std;
void Print_Header()
{
	cout << "\t\t\tMultiplication Table From 1 To 10\t\t\t\t\n";
}

void Print_Form10Line()
{
	cout << "\n\t";
	int counter = 1;
	while(counter <= 10)
	{
		cout << counter << '\t';
		counter++;
	}
	cout << "\n__________________________________________________________________________________\n";
}
void Print(int number)
{
	if (number >= 10)
		cout << " |\t";
	else
		cout << "  |\t";
}
void PrinMulti()
{
	int i = 1;
	while(i <= 10)
	{
		int j = 1;
		cout << i ;
		Print(i);
		while(j <= 10)
		{
			cout << i * j << '\t';
			j++;
		}
		cout << '\n';
		i++;
	}
}
int main()
{
	Print_Header();
	Print_Form10Line();
	PrinMulti();
}
