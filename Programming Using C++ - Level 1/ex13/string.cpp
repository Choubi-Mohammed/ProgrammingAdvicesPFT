/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   string.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/10/28 18:01:37 by shobeedev               shobee4ever      */
/*   Updated: 2025/10/28 18:13:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1,str2,str3;
	cout << "please entre the first string : ";
	getline(cin ,str1);
	cout << "please entre the second string : ";
	cin >> str2;
	cout << "please entre the thirt string : ";
	cin >> str3;

	cout << "***********************************************\n";
	cout << "the length of first string is : " << str1.length() << endl;
	cout << "Characters	at position 0,2,4,7 are : " << str1[0] << "," << str1[2] << "," << str1[4] << "," << str1[7] << endl;
	cout << "concatenating the second and thirt string = " << str2 + str3 << endl;
	cout << stoi(str2) << " * " << stoi(str3) << " = " << stoi(str2) * stoi(str3) << endl;



	return 0;



}
