/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   declaration_vs_definition.cpp                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/19 16:55:35 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/19 16:57:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

//declaration function
int tt_Add(int a,int b);

int main()
{
	int a = 15;
	int b = 47;
	cout << tt_Add(a,b) << endl;

	return 0;
}

int tt_Add(int a,int b)
{
	return (a+b);
}
