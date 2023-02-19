#include<stdio.h>


int toplam(int num){
	if(num==0){
		return 0;
	}
	else{
		return num%10+toplam(num/10);
		
	}
	
}
main(){
	int num;
	printf("enter the num: ");
	scanf("%d",&num);
	printf("%d",toplam(num));
	
	return 0;
}
