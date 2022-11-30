#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int islem,tutar;
	int bakiye = 1000;
	
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgula\n5:Kart İade\n\n\n");
	
	printf("Lutfen yapmak istediginiz islemi seciniz: ");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
			printf("Bakiyeniz : %d\n",bakiye);
			printf("Cekilecek Tutar :");
			scanf("%d",&tutar);
			if(tutar > bakiye)
			{
				printf("Bakiyeniz yetersiz...");
			}
			bakiye -=tutar;
			printf("Yeni Bakiyeniz %d",bakiye);
			
			break;
		
		case 2:
			printf("Bakiyeniz : %d\n",bakiye);
			printf("YatirilacakTutar :");
			scanf("%d",&tutar);
			bakiye +=tutar;
			printf("Yeni Bakiyeniz %d",bakiye);
			
			break;
		
		case 3:
			
			printf("Bakiyeniz : %d\n",bakiye);
			printf("Havale Yapılacak Tutar :");
			scanf("%d",&tutar);
			if(tutar > bakiye)
			{
				printf("Bakiyeniz yetersiz...");
			}
			bakiye -=tutar;
			printf("Yeni Bakiyeniz %d",bakiye);
			
			break;
	
		case 4:
			printf("Bakiyeniz : %d",bakiye);
			break;
		case 5:
			printf("Kart iade edildi...\n");
			break;
			
			
		default:
			printf("Tanımlanmayan İslem");
		break;
		
		
	}
	
	return 0;
	
}
