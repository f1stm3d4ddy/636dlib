/* main.c */
#include "matr.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void read_matr(double **m, int n)
{
/* implement the reading n*n numbers from stdin to 2-dim array */
}

int main()
{
	int N;
	int i, j;
	scanf("%d", &N);
	double **a = (double**)malloc(sizeof(double)*N);
	double **b = (double**)malloc(sizeof(double)*N);
	for (i = 0; i < N; i++)
	{
		a[i] = (double*)malloc(sizeof(double)*N);
		b[i] = (double*)malloc(sizeof(double)*N);	
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = rand() % 11;
			b[j][i] = rand() % 11;
		}
	}
	//output
/*	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%lf ", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%lf ", b[i][j]);
		}
		printf("\n");
	}
	*/
/* main for tests: alloc mem for 2 square matrices and read them from stdin, then run 'matr()' */
/* input format (stdin): n
 then 2 square matrices (n * n)
*/	
	matr(a,b,N);
	for (i = 0; i < N; i++)
	{
		free(a[i]);
		free(b[i]);
	}
	free(a);
	free(b);
	return 0;
}
