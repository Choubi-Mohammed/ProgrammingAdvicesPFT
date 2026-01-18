/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#03.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/17 11:58:42 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/18 15:07:43 by shobeedev            tfaaty fi l3oolaa   */
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
			arr[i][j] = random_int(1,10);
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

void sum_col_matrix(int arr[][100],int lenRow,int lenCol)
{
	printf("\nthe following are the the sum of each col int the matrix :\n");
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
		printf("Cow %d Sum of Each col  = %d\n",i+1,sum);
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

	sum_col_matrix(arr,lenRow,lenCol);

	return 0;
}
