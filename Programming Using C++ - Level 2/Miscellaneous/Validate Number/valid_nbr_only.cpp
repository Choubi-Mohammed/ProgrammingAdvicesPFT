/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   valid_nbr_only.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/17 18:10:04 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/17 18:29:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

using namespace std;

int ReadNbrOnly()
{
	int nbr;

	cout << "Enter a Number : ";
	cin >> nbr;

	while(cin.fail())//had fail ka tchouf dak idkhal dyal cin wach s7i7 wla khalt ila kan khalt ka ndokhlo had loop.
	{
		cin.clear();//f7alat madrnach hady ra yb9a lin dak error state fi cin fhmty,mny drna hady b7ala kn3awdo ntlbo cin >> Number mn jdid.
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//hada ahm line 7it howa ly ky ykhaly input buffer clean y3ny ky y7yd dakchy ralat.
		cout << "Invalid Number, Please Enter a valid Number : ";
		cin >> nbr;
	}
	return nbr;
}

int main()
{
	int Number = ReadNbrOnly();
	cout << Number << endl;

	return 0;
}
