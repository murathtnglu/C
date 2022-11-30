#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int vize1,vize2,final;
	double dersort;
	
	printf("1.vize notunu giriniz : ");
	scanf("%d",&vize1);
	
	printf("2.vize notunu giriniz : ");
	scanf("%d",&vize2);
	
	
	printf("Final notunu giriniz : ");
	scanf("%d",&final);
	
	
	dersort = (vize1*0.2) +(vize2*0.2) + (final*0.6);
	
	if(dersort<=100 && dersort>90)
	{
		printf("AA ile gectiniz");
	}
	
	else if (dersort<90 && dersort > 80)
	{
		printf("BA ile gectiniz");
	}
	
	else if (dersort<80 && dersort > 70)
	{
		printf("BB ile gectiniz");
	}
	else if (dersort<70 && dersort > 60)
	{
		printf("CC ile gectiniz");
	}
	else if (dersort<60 && dersort > 50)
	{
		printf("Koþullu gectiniz");
	}
	
	else
	{
		printf("Dersten kaldiniz...");
	}
	
}
		
	
