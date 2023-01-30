#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int no;
	char isim[30];
	char soyad[30];
	int bakiye;
	
}musteri;


int main() {
	musteri bosmusteri={0,"","",0};
	FILE *ptr;
	int i;
	if((ptr=fopen("musterikayitlarii.txt","w"))==NULL){
		printf("dosya calistirilamadi");
	}
	else{
		//100 musterilik yer ayrildi
		for(i=0;i<100;i++){
			fwrite(&bosmusteri,sizeof(musteri),1,ptr);
		}
		fclose(ptr);
	}
	printf("100 musteri icin yer tahsil edildi\n");
	
	//5 adet muster kaydi icin
	if((ptr=fopen("musterikayitlarii.txt","r+"))==NULL){
		printf("dosya acilamadi");
	}
	else{

	   printf("5 musteri bilgisi giriniz:\n");
		for(i=0;i<5;i++){
			printf("%d. musteri no,ad,soyad,bakiye:",i+1);
			scanf("%d%s%s%d",&bosmusteri.no,bosmusteri.isim,bosmusteri.soyad,&bosmusteri.bakiye);
			fseek(ptr,(bosmusteri.no-1)*sizeof(musteri),SEEK_SET);//Buradaki bosmusteri.no-1 deki -1 baþýna git demek. Burasý koordinat belirler
			fwrite(&bosmusteri,sizeof(musteri),1,ptr);//yazma iþlemi

		}
		fclose(ptr);
	}
	//okuma iþlemi
		if((ptr=fopen("musterikayitlarii.txt","r"))==NULL){
	        printf("dosya acilamadi");
          }
        else{
			printf("kayitli musteri bilgileri\n");
			printf("%s\t%s\t%s\t%s\n","No","Ad","Soyad","Bakiye");
			while(!feof(ptr)){
				fread(&bosmusteri,sizeof(musteri),1,ptr);
				if(bosmusteri.no!=0)
				   printf("%d\t%s\t%s\t%d\n",bosmusteri.no,bosmusteri.isim,bosmusteri.soyad,bosmusteri.bakiye);
			}
			fclose(ptr);
		}
	return 0;
	}


