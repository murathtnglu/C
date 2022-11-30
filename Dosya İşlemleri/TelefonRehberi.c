#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>




int main() {
	
	
	char ad[25],soyad[25],telno[12];
	int secim,cik = 0;
	
	FILE *dosya;
	//dosya = fopen("rehber.txt","w"); mod olarak w(write)komutu her derlendiðinde yeniden bir txt oluþturu
	dosya = fopen("rehber.txt","a");//a(append)komutu burada dizine gider eðer dosya varsa yeni veri ekler.
	dosya = fopen("rehber.txt","r+");
	
	
	
	printf("=====Telefon Rehberi=====\n");
	
	
	
	
	while(cik == 0 )
	{	printf("1) Kisi Ekle\n2) Kisileri Listele\n3) Cikis Yap\nLutfen Yapmak Istediginiz Islemi Seciniz: ");
		scanf("%d",&secim);
			
		switch(secim)
	{
		case 1:
			printf("Ad Giriniz : ");
			scanf("%s",&ad);
			printf("Soyad Giriniz :");
			scanf("%s",&soyad);
			printf("Telefon Numarasý Giriniz : ");
			scanf("%s",&telno);
			printf("%s Kisisi eklendi\n\n ",ad);
		
			fprintf(dosya,"%s %s %s",&ad,&soyad,&telno);
			fclose(dosya);
			break;
							
		case 2:
		
		while(!feof(dosya)){
		fscanf(dosya,"%s",ad);
		printf("%s ",ad);
		fscanf(dosya,"%s",soyad);
		printf("%s ",soyad);
		fscanf(dosya,"%s",telno);
		printf("%s \n",telno);
		}		
			fclose(dosya);
			break;
			
		case 3:
			cik = 1;
			printf("Programdan Cikildi...");
			fclose(dosya);
			break;	
			
			default:
				printf("Yanlis Bir Islem Yaptiniz Tekrar Deneyin...\n\n");
	}
	
	getch();	
		
}

	fclose(dosya);
	return 0;
}
