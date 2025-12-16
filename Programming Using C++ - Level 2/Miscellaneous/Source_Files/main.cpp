/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   main.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/16 17:39:57 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/16 18:01:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Header_Files/mylib.h"
using namespace std;
using namespace tt_mylib;//we use this to dont use tt_mylib::hello() again.
int main()
{
	hello();
	cout << "the sum of two number is " << tt_add(15,48) << endl;
	cout << "the multiplication of two number is " << tt_mult(15,48) << endl;
	return 0;
}
