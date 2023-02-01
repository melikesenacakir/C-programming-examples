#include<stdio.h>
#include<stdlib.h>
#define n 5

main(){
	int A[n],B[n],i,j,count=0,locate=0;
	for(i=0;i<n;i++){
		printf("enter A[%d] ",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
			 continue;
			if(A[i]==A[j]){
				locate=1;
				break;
			}  
		}
		if(locate!=1){
			B[count]=A[i];
			count++;
		}
		locate=0;
	}
	printf("these are the unique values: ");
	for(i=0;i<count;i++){
		printf("%d ",B[i]);
	}
	printf("\nthere are %d unique elements",count);
	return 0;
}
