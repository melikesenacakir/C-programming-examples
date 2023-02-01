#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a=20;
int max(int b);

main(){
	srand(time(0));
	printf("a = %d\n",a);
	printf("max sayi=%d",max(rand()%30));
	
	
	return 0;
}

int max(int b){
	printf("b = %d\n",b);
	int max;
	if(a<b){
		max=b;
		return max;
	}
	else if(a>b){
		max=a;
		return max;
	}
	else{
		printf("a=b");
		max=a;
		return max;
	}
	}
