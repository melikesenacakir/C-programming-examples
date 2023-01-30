#include<stdio.h>
int sayac1=0;
int sayac2=0;

int fonk(int num1,int num2,int tekrar){
	if(tekrar>sayac1){
		printf("%d",num1);
		sayac1++;
		return fonk(num1,num2,tekrar);
		}
	if(tekrar*2>sayac2){
		printf("%d",num2);
		sayac2++;
		return fonk(num1,num2,tekrar);	
	}
	
	
}
main(){
	int num1,num2,tekrar;
	printf("1.sayiyi giriniz: ");
	scanf("%d",&num1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&num2);
	printf("sayilarin tekrarlanis sayisini girin: ");
	scanf("%d",&tekrar);
	fonk(num1,num2,tekrar);	
	
	
	return 0;
}
