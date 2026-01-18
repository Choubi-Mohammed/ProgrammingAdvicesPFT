/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#08.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/18 16:52:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 17:17:49 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_int(int from,int to)
{
	int random_int = rand() % (to - from + 1) + from;
	return random_int;
}

void FillMatrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			arr[i][j] = random_int(1,10);
			j++;
		}
		i++;
	}
}
void Mult2Matrix(int FirMat[][100],int SecMat[][100],int MultMat[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			MultMat[i][j] = FirMat[i][j] * SecMat[i][j];
			j++;
		}
		i++;
	}
}
void PrintMatrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(arr[i][j] >= 10)
				printf("%d\t",arr[i][j]);
			else
				printf("0%d\t",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int FirMat[100][100],SecMat[100][100],MultMat[100][100];
	int lenRow,lenCol;

	printf("Row = ");
	scanf("%d",&lenRow);
	printf("Col = ");
	scanf("%d",&lenCol);

	printf("\nMatrix 1 : \n");
	FillMatrix(FirMat,lenRow,lenCol);
	PrintMatrix(FirMat,lenRow,lenCol);

	printf("\nMatrix 2 : \n");
	FillMatrix(SecMat,lenRow,lenCol);
	PrintMatrix(SecMat,lenRow,lenCol);

	printf("\nResult of multi : \n");
	Mult2Matrix(FirMat,SecMat,MultMat,lenRow,lenCol);
	PrintMatrix(MultMat,lenRow,lenCol);

	return 0;

}
