#include<stdio.h>
#include<stdlib.h>

//bubblesort ve pointer ile ogreno kucukten buyuge sýralama

void BubbleSort(char *arr,int n){
	int i,j,k;
	char temp;
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(*(arr+j)>*(arr+j+1)){
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
	printf("\n");
	for(k=0;k<n;k++){
		printf("%c ",*(arr+k));
	}
}

main(){
	int n=10;
	char arr[n];
	printf("ogrenci numaranizi giriniz: ");
	scanf("%s",arr);
	BubbleSort(arr,n);
	
}
