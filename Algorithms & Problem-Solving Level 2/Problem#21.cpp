/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#21.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/27 17:34:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/27 19:05:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
using namespace std;

void PrintFibonacciSer(int nbr)
{
	int i = 1;
	int a = 0;
	int b = 1;
	int next = 0;
	while(i <= nbr)
	{
		printf("%d ",a);
		next = a + b;//a for prev and b for current
		a = b;//now update a its prev now
		b = next;//now update b its current now
		i++;
	}
}

int main()
{
	PrintFibonacciSer(10);

}
