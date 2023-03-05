#include<stdio.h>
#include<string.h>
void sesliharf(char kelime[],int uzunluk){
	int i,j,sayac=0;
	char sesliharf[]={'a','e','i','o','u'};
	for(i=0;i<uzunluk;i++){
		for(j=0;j<5;j++){
			if(kelime[i]==sesliharf[j]){
				sayac++;
			}
		}
	}
	printf("%d",sayac);
}
int main(){
	int uzun=0,i;
	char dizi[100];
	printf("bir kelime giriniz: ");
	gets(dizi);
	
	for(i=0;dizi[i]!='\0';i++){
		uzun++;
	}
	sesliharf(dizi,uzun);
	
	
	return 0;
}
