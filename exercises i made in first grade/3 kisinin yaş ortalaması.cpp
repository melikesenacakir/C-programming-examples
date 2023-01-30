#include<stdio.h>

int ortdondur(int num1,int num2,int num3){
	int ort;
	ort=(num1+num2+num3)/3;
	return ort;

	
}
	
	
	

main(){
	printf(" 3 arkadas yaslarinizi giriniz ortalamalarini bulalim!!\n");
	float num1,num2,num3,a;
	printf("enter num1: ");
	scanf("%f",&num1);
	printf("enter num2: ");
	scanf("%f",&num2);
	printf("enter num3: ");
	scanf("%f",&num3);
	
   a= ortdondur(num1,num2,num3);
   printf("ortalamasi=%f",a);
	
	
	return 0;
}
