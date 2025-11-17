/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Greatest_Common_Div.cpp                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/11/17 17:16:29 by shobeedev               shobee4ever      */
/*   Updated: 2025/11/17 19:31:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void ReadTwoNumber(int &n1,int &n2)
{
	cout << "Input the first number: ";
	cin >> n1;
	cout << "Input the second number:";
	cin >> n2;
}
int returnArrGCD(int arr[],int number)
{
	int counter = 1;
	int i = 0;
	while(counter <= number)
	{
		if (number % counter == 0)
		{
			arr[i] = counter;
			i++;
		}
		counter++;
	}
	return i;
}
int ComonDiv(int arrF[],int arrS[],int lenF,int lenS)
{
	int i = 0;
	int GCD = 0;
	while (i < lenF)
	{
		int j = 0;
		while(j < lenS)
		{
			if(arrF[i] == arrS[j])
			{
				if (arrF[i] > GCD)
					GCD = arrF[i];
			}
			j++;
		}
		i++;
	}
	return GCD;
}

int main()
{
	int First,Second;
	ReadTwoNumber(First,Second);
	int arrF[First];
	int arrS[Second];
	int lenF = returnArrGCD(arrF,First);
	int lenS = returnArrGCD(arrS,Second);
	cout << "\nThe Greatest Common Divisor is: " << ComonDiv(arrF,arrS,lenF,lenS);

	return 0;
}
