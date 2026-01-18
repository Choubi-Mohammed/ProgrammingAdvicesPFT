/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#05.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/18 13:45:27 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 15:06:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int random_int(int from,int to)
{
	int random_int = rand() % (to - from + 1) + from;
	return random_int;
}

void Fill2DArray(int arr[][100],int lenRow,int lenCol)
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

void Print2DArray(int arr[][100],int lenRow,int lenCol)
{
	printf("the 2D Array %dx%d :\n",lenRow,lenCol);
	int i =0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("%d\t",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void sum_col(int newArr[],int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenCol)
	{
		int j = 0;
		int sum = 0;
		while(j < lenRow)
		{
			sum = sum + arr[j][i];
			j++;
		}
		newArr[i] = sum;
		i++;
	}
}

void PrintSumCol(int newArr[],int lenRow)
{
	printf("\nThe sum of each coloms :\n");
	int i = 0;
	while(i < lenRow)
	{
		printf("the sum of coloms %d = %d\n",i+1,newArr[i]);
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100][100],newArr[100];
	int lenRow,lenCol;

	printf("enter the len of Row And Colomns : ");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArray(arr,lenRow,lenCol);
	Print2DArray(arr,lenRow,lenCol);
	sum_col(newArr,arr,lenRow,lenCol);
	PrintSumCol(newArr,lenRow);

	return 0;
}
