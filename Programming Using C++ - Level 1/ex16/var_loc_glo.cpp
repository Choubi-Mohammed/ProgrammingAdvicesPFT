/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   var_loc_glo.cpp                                        |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/31 12:07:10 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/31 12:12:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int x = 2004;// htis is a globale varaible ka tb9a m3ana 7ta nkamlo l programe;

void myFUnc()
{
	int x = 2005;//this is local variable ka tb9a 7ta ka tkml function;
}

int main()
{
	int x = 2006;// local varaible

	// to use a globale variable like print value using this ::
	cout << ::x << endl;//print 2004
	::x++;// increment  var x
	cout << ::x << endl;//2005;
}
