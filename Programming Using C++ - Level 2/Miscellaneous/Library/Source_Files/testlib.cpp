/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   testlib.cpp                                            |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/16 18:26:51 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/16 19:35:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

//file that contains the code
#include "../Header_Files/testlib.h"

int tt_pow(int base,int exp)
{
	int i = 1;
	int pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}
