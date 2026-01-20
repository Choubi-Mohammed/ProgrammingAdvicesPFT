/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#10.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/20 15:37:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/20 15:54:44 by shobeedev            tfaaty fi l3oolaa   */
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
	int i = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			printf("%0*d\t",2,arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void PrintSumOfMatrix(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int sum = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			sum += arr[i][j];
			j++;
		}
		i++;
	}
	printf("\nthe sum of matrix is %d\n",sum);
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100][100];
	int lenRow,lenCol;

	printf("Please Enter the Len of Row and Coloms :\n");
	scanf("%d %d",&lenRow,&lenCol);

	Fill2DArray(arr,lenRow,lenCol);
	printf("Matrix :\n");
	Print2DArray(arr,lenRow,lenCol);
	PrintSumOfMatrix(arr,lenRow,lenCol);
	return 0;
}
