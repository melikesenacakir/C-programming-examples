#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alfabe(char kelime[],int uzunluk){
	int i,j;
	for(i=0;i<uzunluk;i++){
		for(j=0;j<uzunluk;j++){
			 if(kelime[i]<kelime[j]){
		 	char temp=kelime[j];
		 	kelime[j]=kelime[i];
		 	kelime[i]=temp;
		 }
		}
	}
	printf("%s",kelime);
}
int main(){
	int uzun=0,i;
	char dizi[100];
	printf("bir kelime giriniz: ");
    gets(dizi);
	;
	for(i=0;dizi[i]!='\0';i++){
		uzun++;
	}
	alfabe(dizi,uzun);

	
	
	return 0;
}
