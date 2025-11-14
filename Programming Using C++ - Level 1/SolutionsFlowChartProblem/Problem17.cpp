/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem17.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 19:04:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 19:30:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnbr(int &nbr)
{
	cout << "please entre the number :";
	cin >> nbr;
}
void Print_1_N_using_for(int nbr)
{
	for(int i = 0;i < nbr;i++)
	{
		cout << i+1 << " " << endl;
	}
}
void Print_1_N_using_dowhile(int nbr)
{
	int i = 0;
	do {
		cout << i+1 << " " << endl;
		i++;
	}while(i < nbr);
}

void Print_1_N_using_while(int nbr)
{
	int i = 0;
	while(i < nbr)
	{
		cout << i + 1 << " " << endl;
		i++;
	}
}

int main()
{
	int nbr;
	Readnbr(nbr);
	Print_1_N_using_for(nbr);
	Print_1_N_using_while(nbr);
	Print_1_N_using_dowhile(nbr);

	return 0;
}
