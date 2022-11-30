#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	printf("char %d\n",sizeof(char));//1
	printf("int %d\n",sizeof(int));//4
	printf("float %d\n",sizeof(float));//4
	printf("double %d\n",sizeof(double));//8
	printf("long int %d\n",sizeof(long));//4
	printf("short int %d\n",sizeof(short));//2
	printf("unsigned int %d\n",sizeof(unsigned int));//4
	printf("unsigned short %d\n",sizeof(unsigned short int));//2
	printf("unsigned long  %d\n",sizeof(unsigned long));//4
	printf("unsigned char %d\n",sizeof(unsigned char));//1
	printf("long double %d\n",sizeof(long double));//16
	
	return 0;
}
