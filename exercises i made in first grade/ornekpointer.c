#include<stdio.h>

main(){
	int n,i,j,*ptr,k;
	printf("eleman sayisi giriniz: ");
	scanf("%d",&n);
	
	char dizi[n][n];
	int yenid[n][n];
	ptr=&yenid[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("dizinin [%d][%d] indisindeki elemanini giriniz: ",i,j);
			scanf("%c",&dizi[i][j]);
			getchar();
			
		}
		printf("\n");
		
	}
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			
			*ptr=i*10+j;
			printf(" %d\t\t",*ptr);
			
		}
		printf("\n");
	}
	printf("%d",sizeof(int));
	
	
	return 0;
}
