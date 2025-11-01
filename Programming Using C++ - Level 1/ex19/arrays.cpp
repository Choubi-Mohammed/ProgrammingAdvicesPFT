/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   arrays.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/01 09:46:17 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/01 09:50:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int arr[3];
	cout << "please entre the nbrs :\n";
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cout << "****************************\n";
	cout << "the avrage this notes is : " << (arr[0]+arr[1]+arr[2])/3 << endl;

	return 0;
}
