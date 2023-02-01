#include<stdio.h>
void enbuyuk(int dizi[],int size){
	int i,j,a;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(dizi[i]>dizi[j]){
			a=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=a;
			}
		}
	}
	for(i=0;i<2;i++){
		printf("dizinin en buyuk %d. elemani: ",i+1);
		printf("%d\n",dizi[i]);
	}
	
}
int main(){
	int n;
	int s1[n],i;
	n=10;
	for(i=0;i<n;i++){
		printf("dizinin [%d].elemanini giriniz: ",i+1);
		scanf("%d",&s1[i]);
	}
	enbuyuk(s1,n);
	
	return 0;
}
