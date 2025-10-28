/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   casting_DT.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/28 17:10:47 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/28 17:29:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "43.22";
	double st1 = stod(str);
	float st2 = (float) st1;// or with func stof()
	int st3 = (int) st2;// or with func stoi()
	cout << st1 << endl;
	cout << st2 << endl;
	cout << st3 << endl;

	int nbr1 = 20;
	string n1 = to_string(nbr1);
	cout << n1 << endl;

	double nbr2 = 33.1977;
	string n2 = to_string(nbr2);
	cout << n2 << endl;

	float nbr3 = 14.65;
	string n3 = to_string(nbr3);
	int n4 = (int) nbr3;
	cout << n3 << endl;
	cout << n4 << endl;


	return 0;

}
