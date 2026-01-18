/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#02.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 11:58:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 15:08:05 by shobeedev            tfaaty fi l3oolaa   */
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

void Sum_row_matrix(int arr[][100],int lenRow,int lenCol)
{
	printf("\nthe following are the the sum of each row int the matrix :\n");
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
		printf("Row %d Sum of Each Row  = %d\n",i+1,sum);
		i++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100][100];
	int lenRow,lenCol;

	printf("please enter the length of Rows and Coloms : ");
	scanf("%d %d",&lenRow,&lenCol);

	fillArr(arr,lenRow,lenCol);

	PrintArr(arr,lenRow,lenCol);

	Sum_row_matrix(arr,lenRow,lenCol);

	return 0;
}
