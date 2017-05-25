#include <stdio.h>
#include <stdlib.h>
#include "matr.h"
#include <time.h>

//Input: a - matrix (dim * dim), b - matrix (dim * dim) 
//Output: none
//stdout: result ('res' matrix);
void matr(double **a, double **b, int dim)
{
	//put your source code here
	//
	double **c = (double**)malloc(sizeof(double)*dim);
	int i = 0;
	int j = 0;
	int k = 0;
	double s = 0;
	for (i = 0; i < dim; i++)
	{
		c[i] = (double*)malloc(sizeof(double)*dim);
	}
	int start = clock();
	for (i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++)
		{
			for (k = 0; k < dim; k++)
			{
				s = s + a[i][k] * b[i][k];
			}
			c[i][j] = s;
			s = 0;
		}
	}
	int end = clock();
	printf("%u", end - start);
/*	for(i = 0; i < dim; i++)
	{
		for (j = 0; j < dim; j++)
			printf("%lf ", c[i][j]);
		printf("\n");
	}
*/
	for (i = 0; i < dim; i++)
	{
		free(c[i]);
	}
	free(c);
	return;
}
