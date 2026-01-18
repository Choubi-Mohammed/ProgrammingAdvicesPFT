/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#01.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 11:05:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 15:08:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
//2D Array.

#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_int(int from,int to)
{
	int random_int = rand() % (to - from + 1) + from;
	return random_int;
}

void Fill2dArray(int twodArr[100][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			twodArr[i][j] = random_int(1,100);
			j++;
		}
		i++;
	}
}

void Print2dArray(int twodArr[100][100],int lenRow,int lenCol)
{
	printf("the following is a %dx%d random matrix: \n",lenRow,lenCol);
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("%d\t",twodArr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int lenRow,lenCol;

	printf("Row = ");
	scanf("%d",&lenRow);

	printf("Colom = ");
	scanf("%d",&lenCol);

	int twodArr[100][100];

	Fill2dArray(twodArr,lenRow,lenCol);

	Print2dArray(twodArr,lenRow,lenCol);

	return 0;

}
