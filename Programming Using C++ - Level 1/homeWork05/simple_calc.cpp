/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   simple_calc.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/02 11:28:13 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/02 11:38:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int &n1,int &n2,char &oper)
{
	cout << "please entre the two numbers : \n";
	cin >> n1;
	cin >> n2;
	cout << "please entre the operation do you went ?\n";
	cin >> oper;
}

void PrintData(int nbr1,int nbr2,char oper)
{

	if(oper == '+')
		cout << nbr1 + nbr2 << endl;
	else if (oper == '-')
		cout << nbr1 - nbr2 << endl;
	else if (oper == '*')
		cout << nbr1 * nbr2 << endl;
	else if (oper == '/')
		cout << nbr1 / nbr2 << endl;
	else if(oper == '%')
		cout << nbr1 % nbr2 << endl;
	else
		cout << "Wrong opertion !\n";
}
int main()
{
	int nbr1,nbr2;
	char opr;
	ReadData(nbr1,nbr2,opr);
	PrintData(nbr1,nbr2,opr);

	return 0;
}
