#include<stdio.h>
main(){
	int m1[2][2]={10,20,30,40};
	int m2[2][2]={30,45,5,9};
	int toplam[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			toplam[i][j]=m1[i][j]+m2[i][j];
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("m1[%d][%d]=%d m2[%d][%d]=%d toplam=%d \n",i,j,m1[i][j],i,j,m2[i][j],toplam[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}
