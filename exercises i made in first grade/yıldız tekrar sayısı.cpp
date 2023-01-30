#include<stdio.h>
main(){
	int i,sayi,j;
	printf("kac defa tekrar edecegini giriniz: ");
	scanf("%d",&sayi);
	
	
	for(i=1;i<=sayi;i++){
		printf("\n");
		for(j=1;j<=5;j++){
			printf("*");
		}
	}
	
	
	return 0;
}

