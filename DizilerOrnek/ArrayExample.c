#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float myArray[5];
	float toplam = 0.0;
	int i;
	
	
	for( i=0 ; i<5 ; i++ )
	{
		printf("Istediginiz sayiyi giriniz : ");
		scanf("%f",&myArray[i]);
	}
	
	for(i = 0 ; i < 5 ; i++)
	{
		toplam +=myArray[i];
	}
	
	printf("Girmis oldugunuz sayilarin aritmetik ortalamasi : %.2f",toplam / 5);
	
	
	
	return 0;
}
