#include<stdio.h>
main(){
	int dizi[8];
	int i,j,a;
	for(i=0;i<8;i++){
		printf("dizinin %d. elemanini giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(dizi[j]>dizi[i]){
				a=dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=a;
			}
		}
	}
	printf("dizinin elemanlari :");
	for(i=0;i<8;i++){
		printf("%d\t",dizi[i]);
	}
	return 0;
}
