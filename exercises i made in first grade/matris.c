#include<stdio.h>
main(){
	
	int i,j,a,b;
	printf("satir sayisi giriniz: ");
	scanf("%d",&a);
	printf("sutun sayisi giriniz: ");
	scanf("%d",&b);
	
	int dizi[a][b];
	for(i=0;i<a;i++){
		
		for(j=0;j<b;j++){
			printf("\n degeriniz:[%d][%d] --->",i+1,j+1);
			scanf("%d",&dizi[i][j]);
			
		}
		
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d  ",dizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
