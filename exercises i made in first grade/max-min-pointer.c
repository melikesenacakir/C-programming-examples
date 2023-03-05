#include<stdio.h>
void fonk(int *p1,int *p2,int *max,int *min){
	if(*p1>*p2){
		*max=*p1;
		*min=*p2;
	}
	else{
		*max=*p2;
		*min=*p1;
	}
}


main(){
	int a,b,max=0,min=0;
	printf("enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	fonk(&a,&b,&max,&min);
	printf("MAX= %d\n",max);
	printf("MIN= %d",min);
	
	return 0;
}
