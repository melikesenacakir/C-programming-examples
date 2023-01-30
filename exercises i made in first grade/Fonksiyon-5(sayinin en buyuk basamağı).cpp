#include<stdio.h>
int maxyazdir(int bsmk1,int bsmk2){
	int max;
	if(bsmk1>bsmk2){
		max=bsmk1;
		return max;
	}
	else{
		max=bsmk2;
		return max;
	}
}

main(){
	int sayi,onlar,birler;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi>100 || sayi<10){
		printf("2 BASAMAKLI BIR SAYI GIRINIZ!!");
	}
	else{
	onlar=sayi/10;
	birler=sayi%10;
	printf("Sayinin basamaklarindakien buyuk sayi= %d",maxyazdir(onlar,birler));
	}
	

	
	
	
	return 0;
}
