#include<stdio.h>

void calculate(int num1,int num2){
	int max;
	if(num1<num2){
		max=num2;
		printf("%d sayisi %d sayisindan buyuktur yani max %d ",num2,num1,max);
	}
	else{
		max=num1;
		printf("%d sayisi %d sayisindan buyuktur yani max %d ",num1,num2,max);
	}
	
	
	
}
main(){
	int num1,num2;
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&num1);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&num2);
	calculate(num1,num2);
	
	
	return 0;
}
