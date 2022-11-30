#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	int factoriel = 1;
	
	printf("Enter Number For Factorial: ");
	scanf("%d",&number);
	
	while(number != 0)
	{
		factoriel = factoriel * number;
		
		number--;
		
	}
	printf("Result : %d ",factoriel);
	
	
	
	return 0;
}
