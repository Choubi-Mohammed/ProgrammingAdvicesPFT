/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   homw_work_add_elements.cpp                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/27 12:26:38 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/27 12:49:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;
int ReadNumber()
{
	int nbr;
	cout << "Enter a number : ";
	cin >> nbr;

	return nbr;
}

void vadd_element(vector <int> &vNumber)
{
	char Resp = 'n';
	do
	{
		int nbr = ReadNumber();
		vNumber.push_back(nbr);
		cout << "Do you want to add more element ? Y/N ";
		cin >> Resp;
	}while(Resp == 'Y' || Resp == 'y');
}

void Printvector(vector <int> vNumber)
{
	cout << "\n\nNumber : ";
	for(int &n : vNumber)
		cout << n << " ";
}
int main()
{
	vector <int> vNumber;
	vadd_element(vNumber);
	Printvector(vNumber);

	return 0;
}
