#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	//Dairenin cevresi 2*pi*r
	
	int yaricap;
	float  pi=3.14,cevre;
	int sayi = 2;
	
	printf("Yaricap giriniz : ");
	scanf("%d",&yaricap);
	
	cevre = 2 * yaricap * pi;
	
	printf("Dairenin Cevresi : %.2f",cevre);
	
	system("pause");
	
	
	return 0;
}
