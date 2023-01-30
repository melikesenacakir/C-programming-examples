#include<stdio.h>
main(){
	int i,j,b;
	printf("satir sayisini giriniz: ");
	scanf("%d",&b);

	for(i=0;i<=b;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

