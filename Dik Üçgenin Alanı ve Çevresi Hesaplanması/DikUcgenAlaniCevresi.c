#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	int x,y,z,  payda = 2 , cevre, alan;
	
	printf("1. kenari giriniz: ");
	scanf("%d",&x);
	
	
	printf("2. kenari giriniz: ");
	scanf("%d",&y);
	
	
	printf("Hipotenusu giriniz: ");
	scanf("%d",&z);
	
	
	alan = x * y / payda;
	cevre = x + y + z;
	
	printf("Ucgeninizin Alani : %d\n",alan);
	printf("Ucgeninizin Cevresi : %d",cevre);
	
	return 0;
}
