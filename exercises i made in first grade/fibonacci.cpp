#include<stdio.h>
main(){
	int i,c;
	int b=1;
	int a=1;
	printf("%d\n",b);
	printf("%d\n",b);
	for(i=1;i<10;i++){
		c=a+b;
		a=b;
		b=c;
		
		printf("%d\n",c);
	}
	
	
	
	return 0;
}
