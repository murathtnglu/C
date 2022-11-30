#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	float pi = 3.14;
	int yaricap;
	float hacim;
	
	printf("Kurenin Yaricapini giriniz : ");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*pi*(yaricap*yaricap*yaricap);
	printf("Kurenin Hacmi : %f dir ",hacim);
	return 0;
}
