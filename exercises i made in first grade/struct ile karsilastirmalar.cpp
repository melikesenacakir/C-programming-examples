#include<stdio.h>
#include<stdlib.h>

typedef struct rasyonel{
	int pay;
	int payda;
}Sayi;

Sayi arttir(Sayi result){
	
	result.pay++;
	result.payda++;
	
	return result;
	
}

Sayi azalt(Sayi result){
	result.pay--;
	result.payda--;
	
	return result;
	
}

int topla(Sayi result){
	Sayi sonuc;
	sonuc.pay=result.pay+result.payda;
	printf("pay ve paydanin toplami: %d\n",sonuc.pay);
	return 0;
	
}

Sayi degerler(){
	Sayi result;
	printf("payini giriniz: ");
	scanf("%d",&result.pay);
	printf("paydasini giriniz: ");
	scanf("%d",&result.payda);
	
	return result;
}

int karsilastirma(Sayi result){
	if(result.pay>result.payda)
	   return 1;
	else if(result.pay==result.payda)
	   return 0;
	else{
	   return -1;	
	}
	   
}
main(){
	Sayi result;
	result=degerler();
	topla(result);
	Sayi azaldi=azalt(result);
	printf("azaltilmis pay ve payda: %d %d\n",azaldi.pay,azaldi.payda);
	Sayi arttirildi=arttir(result);
	printf("arttirilmis pay ve payda: %d %d\n",arttirildi.pay,arttirildi.payda);
	if(karsilastirma(result)==0)
	   printf("pay ve payda esit");
	else if(karsilastirma(result)==1)
	   printf("pay paydadan buyuk");
	else{
		printf("payda paydan buyuk");
	}
	
	
	return 0;
}
