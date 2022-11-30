#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int a,b,c;
	float x1,x2,delta;
	
	printf("Denklemin a degerini giriniz : ");
	scanf("%d",&a);
	
	printf("Denklemin b degerini giriniz : ");
	scanf("%d",&b);
	
	printf("Denklemin c degerini giriniz : ");
	scanf("%d",&c);
	
	
	delta = b*b -4*a*c;
	
	x1 = (-b +(sqrt(delta))) /2*a;
	x2 = (-b - (sqrt(delta))) /2*a;
	
	printf("Denklemin 1.koku %.2f, Denklemin 2.koku %.2f dir ",x1,x2);
	
	
	
	return 0;
}
