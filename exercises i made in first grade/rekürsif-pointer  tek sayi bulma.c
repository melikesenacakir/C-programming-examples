#include<stdio.h>
#include<stdlib.h>

int oddRec(int ptr[],int boyut){
	static int sayac=0;
	if(boyut==-1)
	  return sayac;
	else if(ptr[boyut]%2!=0){
		sayac++;
	}
	
	oddRec(ptr,boyut-1);
	
	
}


main(){
	int n,i;
	printf("eleman sayisini giriniz: ");
	scanf("%d",&n);
	int *ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		printf("ptr[%d]. elemani giriniz: ",i);
		scanf("%d",(ptr+i));
	}
	printf("dizimizde %d tane tek sayi var",oddRec(ptr,n-1));
	
	
	
	return 0;
}
