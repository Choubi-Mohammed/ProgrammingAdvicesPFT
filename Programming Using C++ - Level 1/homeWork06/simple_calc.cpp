/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   simple_calc.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/03 12:45:56 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/03 12:55:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadData(int &n1,int &n2,char &opr)
{
	cout << "please entre the nbr1 and nbr2 : \n";
	cin >> n1;
	cin >> n2;
	cout << "please entre the operation : \n";
	cin >> opr;
}

void PrintCalc(int n1,int n2,char opr)
{
	switch(opr)
	{
		case '+':
			cout << n1 + n2 << endl;
			break;
		case '-':
			cout << n1 - n2 << endl;
			break;
		case '*':
			cout << n1 * n2 << endl;
			break;
		case '/':
			cout << n1 / n2 << endl;
			break;
		default:
			cout << "Wrong operation!!\n";
	}

}

int main()
{
	int nbr1,nbr2;
	char operation;
	ReadData(nbr1,nbr2,operation);
	PrintCalc(nbr1,nbr2,operation);

	return 0;
}
