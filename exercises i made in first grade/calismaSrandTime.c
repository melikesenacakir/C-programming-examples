#include<stdio.h>
#include<time.h>
#include<stdlib.h>

main(){
	int *ptr,i;
	int dizi[10];
	ptr=dizi;
	srand(time(0));
	
	for(i=0;i<10;i++){
		printf("dizinin %d.indeksinin adresi: %#X ",i,ptr+i);
		*(ptr+i)=rand()%100;
		printf("ve degeri: %d\n",*(ptr+i));
	}
	
	return 0;
}
