#include<stdio.h>
main(){
	int sayi,i,toplam=0;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("%d sayisinin kendisi haric tam bolenleri: \n",sayi);
	for(i=1;i<=sayi/2;i++){
		if(sayi%i==0){
			toplam=toplam+i;
			printf("%d\n",i);
		}
	}
	if(toplam==sayi){
		printf("SONUC:%d mukemmel sayidir",sayi);
	}
	else{
		printf("SONUC:%d mukemmel bir sayi degildir",sayi);
	}
	
	
	return 0;
}
//sayimiz mukemmel bir sayimi ??calculator
