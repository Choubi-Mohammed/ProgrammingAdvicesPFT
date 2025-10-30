/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   print_name.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/30 17:13:28 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/30 17:20:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void print_name(string name)
{
	cout << "My Name is : " << name << endl;
}

int main()
{
	string name  = "Mohammed choubi";//01;
	string nm;
	cout << "please entre your name :";//02
	cin >> nm;
	print_name(nm);
	print_name(name);

	return 0;

}
