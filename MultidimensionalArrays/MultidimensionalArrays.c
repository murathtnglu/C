#include <stdio.h>
#include <stdlib.h>

/*  3 sat�r -- 5 s�tun

	3 5 1 3 2
	4 4 4 5 5
	9 8 9 7 7
	
Sonuc: 16 17 14 15 14
	
*/






int main(int argc, char *argv[]) {
	
	
	int multiarray[3][5];
	int i , j;
	int sum = 0;
	
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			scanf("%d",&multiarray[i][j]);
		}
	}
	printf("\n");
	
	
	
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			printf("%d ",multiarray[i][j]);
		}
		printf("\n");
	}
	
	
	for(j = 0 ; j < 5 ; j++)
	{
		for(i = 0 ; i < 3 ; i++)
		{
			sum += multiarray[i][j];
		}
		printf("\n");
		printf("%d ",sum);
		sum = 0;//her d�ng� sonras�nda de�eri s�f�rlad�k eski de�eri yazd�rmas�n diye
	}
	
	
	
	
	return 0;
}
