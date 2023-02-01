#include<stdio.h>
#include<stdlib.h>
#define n 5


int main(){
	int A[n],i;
	for(i=0;i<n;i++){
		printf("enter A[%d] ",i);
		scanf("%d",&A[i]);
	}
	int max_sum=A[0]+A[1];
	
	for(i=0;i<n-1;i++){
		if((A[i]+A[i+1])>max_sum)
		  max_sum=A[i]+A[i+1];
	}
	printf("max sum is %d",max_sum);
}
