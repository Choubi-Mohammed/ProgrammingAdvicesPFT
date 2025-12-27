/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   homw_work_add_elements.cpp                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 12:26:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 12:34:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumber;
	bool morenbr = false;
	int nbr;
	do
	{
		cout << "enter a number : ";
		cin >> nbr;
		vNumber.push_back(nbr);
		cout << "do you want to insert more ? Yes[1],No[0] ";
		cin >> morenbr;
	}while(morenbr == true);

	cout << "numbers : ";
	for(int &n:vNumber)
		cout << n << " ";


	return 0;
}
