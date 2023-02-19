#include<stdio.h>


void yerdegistirme(int *ptr1,int *ptr2){
	int tmp;
	tmp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=tmp;
	
}

main(){
	int a=9,b=5;
	printf("ONCESI: a= %d ve b= %d\n",a,b);
	yerdegistirme(&a,&b);
	printf("SONRASI: a=%d ve b=%d ",a,b);
	
	return 0;
}
