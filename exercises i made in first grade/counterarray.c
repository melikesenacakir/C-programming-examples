#include<stdio.h>
#include<stdlib.h>


main(){
	
	int A[14]={0,1,2,3,0,4,5,5,3,2,1,0,4,4};
	int countarr[6]={0},i;
	for(i=0;i<14;i++){
		countarr[A[i]]++;
	}
	for(i=0;i<6;i++){
		printf("there are %d of number %d in the array\n",countarr[i],i);
	}
	return 0;
}
