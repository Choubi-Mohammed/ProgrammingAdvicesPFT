/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem17.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/14 19:04:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/14 19:13:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void Readnbr(int &nbr)
{
	cout << "please entre the number :";
	cin >> nbr;
}

void Print_1_N(int nbr)
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
	Print_1_N(nbr);


	return 0;
}
