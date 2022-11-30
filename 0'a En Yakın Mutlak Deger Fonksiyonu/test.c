#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	int temps[10]={9,8,7,6,5,4,3,2,1,10};
	
    int enyakindeger, x, y;
    
        for ( x = 1; x < 10; x++ )
        {
          for ( y = 0; y < 10-x; y++ )
          {
          	if ( temps[y] < temps[y+1] )
        	{
        		enyakindeger=temps[y];
			}
				
		  }
        }
        
    printf("%d",enyakindeger);
    
    return 0;
}
