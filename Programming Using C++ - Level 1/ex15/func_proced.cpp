/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   func_proced.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/29 17:43:20 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/29 17:48:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void mySomeFun()
{
	int nbr1,nbr2,res;

	cout << "please entre the nbr1 :" ;
	cin >> nbr1;
	cout << "please entre the nbr2 :";
	cin >> nbr2;

	res = nbr1 + nbr2;

	cout << "the result is " << res << endl;
}

int mySomeFun2()
{
	int nbr1,nbr2,res;

	cout << "please entre the nbr1 :" ;
	cin >> nbr1;
	cout << "please entre the nbr2 :";
	cin >> nbr2;

	res = nbr1 + nbr2;
	return res;
}

int main()
{
	mySomeFun();
	cout << mySomeFun2() << endl;

	return 0;

}
