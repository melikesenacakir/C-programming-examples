#include<stdio.h>
int sayikontrol(int sayi[],int boyut){
 	int yuzler,onlar,birler;
 	if(sayi[boyut]/100==0){
 	     	onlar=(sayi[boyut]/10)%10;
 			birler=sayi[boyut]%10;
 			if(onlar==birler){
 				return 1;
			 }
			 else{
			 	return 0;
			 }
		 }
          if(sayi[boyut]/1000==0){
 			yuzler=sayi[boyut]/100;
 			onlar=(sayi[boyut]/10)%10;
 			birler=sayi[boyut]%10;
 			if(yuzler==onlar && yuzler==birler && onlar==birler){
 				return 1;
			 }
			 else{
			 	return 0;
			 }
		 }
}
main(){
	int dizi[9]={233,45,777,81,36,90,88,11,61};
	int i;
	for(i=0;i<9;i++){
		sayikontrol(dizi,i);
		if(sayikontrol(dizi,i)==1){
		printf("%d >> tum basamaklar birbirine esittir\n",dizi[i]);
	}
	else{
		printf("%d >> tum basamaklar birbirine esit degildir\n",dizi[i]);
	}
	}
}
