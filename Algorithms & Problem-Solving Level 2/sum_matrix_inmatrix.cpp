/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   sum_matrix_inmatrix.cpp                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 12:37:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/17 13:09:13 by shobeedev            tfaaty fi l3oolaa   */
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

void fillArr(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j <lenCol)
		{
			arr[i][j] = random_int(1,100);
			j++;
		}
		i++;
	}
}

void PrintArr(int arr[][100],int lenRow,int lenCol)
{
	printf("the following is a %dx%d random matrix : \n",lenRow,lenCol);
	int i = 0;
	while(i < lenRow)
	{
		int j= 0;
		while(j < lenCol)
		{
			printf("%d\t",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void sum_row_mat(int newArr[][100],int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		int sum = 0;
		while(j < lenCol)
		{
			sum = sum + arr[i][j];
			j++;
		}
		newArr[0][i] = sum;
		i++;
	}
}
void PrintRow(int newArr[][100],int lenRow)
{
	printf("the following matrix is sum of each row :\n");
	int i = 0;
	while(i < lenRow)
	{
		printf("sum of row %d is %d\n",i+1,newArr[0][i]);
		i++;
	}
}

int main()
{
	int arr[100][100],newArr[100][100];
	int lenRow,lenCol;

	printf("row and col : ");
	scanf("%d %d",&lenRow,&lenCol);

	fillArr(arr,lenRow,lenCol);

	PrintArr(arr,lenRow,lenCol);

	sum_row_mat(newArr,arr,lenRow,lenCol);

	PrintRow(newArr,lenRow);

	return 0;
}


