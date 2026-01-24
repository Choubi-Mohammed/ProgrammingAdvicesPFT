/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   Problem#19.cpp                                         |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/22 18:46:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/24 17:46:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int rando_int(int from,int to)
{
	int rando_int = rand() % (to - from + 1)+from;
	return rando_int;
}

void fill2darr(int arr[][100],int lenRow,int lenCol)
{
	int i =0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			arr[i][j] = rando_int(1,100);
			j++;
		}
		i++;
	}
}

void Print2dArr(int arr[][100],int lenRow,int lenCol)
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

void PrintMinMax(int arr[][100],int lenRow,int lenCol)
{
	int i = 0;
	int Min = arr[0][0],Max = 0;
	while(i < lenRow)
	{
		int j = 0;
		while(j < lenCol)
		{
			if(arr[i][j] > Max)
				Max = arr[i][j];
			if(arr[i][j] < Min)
				Min = arr[i][j];
			j++;
		}
		i++;
	}
	printf("\nMax of Matrix is %d\n",Max);
	printf("\nMin of Matrix is %d\n",Min);
}
int main()
{
	srand((unsigned)time(NULL));
	int lenRow, lenCol;
	int arr[100][100];

	printf("Enter row and col :\n");
	scanf("%d %d",&lenRow,&lenCol);


	fill2darr(arr,lenRow,lenCol);

	printf("Matrix  :\n");
	Print2dArr(arr,lenRow,lenCol);

	PrintMinMax(arr,lenRow,lenCol);

	return 0;
}
