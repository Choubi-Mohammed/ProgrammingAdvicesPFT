/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sumofseries_v5.cpp                                     |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/12 18:08:03 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 18:18:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
void ReadInt(float &number)
{
	cout << "Input number of terms: ";
	cin >> number;
}
float series_v5(float number)
{
	float res = 1/number;
	cout << "1/" << number;
	return (float)res;
}
void sumofseries_v5(float number)
{
	int i = 1;
	float sum = 0;
	while(i <= number)
	{
		sum = sum + series_v5(i);
		if(i != number)
			cout << " + ";
		i++;
	}
	cout << "\nThe sum of the series upto "<< number << " terms: " << sum << endl;
}

int main()
{
	float number;
	ReadInt(number);
	sumofseries_v5(number);

	return 0;

}
