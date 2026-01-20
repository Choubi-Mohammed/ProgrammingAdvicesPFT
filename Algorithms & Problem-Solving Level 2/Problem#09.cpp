/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#09.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/19 23:10:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/20 15:33:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int random_int(int from,int to)
{
	int random_int = rand() % (to - from + 1)+ from;
	return random_int;
}

void Fill2DArr(int arr[][100],int lenRow,int lenCol)
{
	int i =0;
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

void Print2DArr(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(arr[i][j] < 10)
				printf("0%d\t",arr[i][j]);
			else
				printf("%d\t",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void PrintMidRow(int arr[][100],int lenRow,int lenCol)
{
	int MidRow = lenRow / 2;
	int i = 0;
	while(i < lenCol)
	{
		if (arr[1][i] < 10)
			printf("0%d\t",arr[MidRow][i]);
		else
			printf("%d\t",arr[MidRow][i]);
		i++;
	}
}

void PrintMidCol(int arr[][100],int lenRow,int lenCol)
{
	int MidCol = lenCol / 2;
	int i = 0;
	while(i < lenRow)
	{
		if (arr[i][MidCol] < 10)
			printf("0%d\t",arr[i][MidCol]);
		else
			printf("%d\t",arr[i][MidCol]);
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100][100];
	int lenRow;
	int lenCol;
	printf("Row And Coloms : ");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArr(arr,lenRow,lenCol);

	printf("Matrix %dx%d :\n",lenRow,lenCol);
	Print2DArr(arr,lenRow,lenCol);

	printf("\nMidle Row of Matrix : \n");
	PrintMidRow(arr,lenRow,lenCol);

	printf("\nMidle Coloms of Matrix : \n");
	PrintMidCol(arr,lenRow,lenCol);


	return 0;
}

