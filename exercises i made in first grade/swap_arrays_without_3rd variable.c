#include<stdio.h>



void swap(int *ptr1,int *ptr2){
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;//swap without 3rd variable
}

void swaparr(int *A,int *B,int size){
	int i;
	for(i=0;i<size;i++){
		swap(&A[i],&B[i]);
	}
}
void printswap_arr(int *A,int *B,int size){
	int i;
	printf("\n\narray A after swap: ");
	for(i=0;i<size;i++){
		printf("%d ",A[i]);
	}
	printf("\narray B after swap: ");
	for(i=0;i<size;i++){
		printf("%d ",B[i]);
	}
}

int main(){
	
	int A[5]={1,2,6,8,3};
	int B[5]={5,4,9,1,2};
	int i;
	printf("array A before swap: ");
	for(i=0;i<5;i++){
		printf("%d ",A[i]);
	}
	printf("\narray B before swap: ");
	for(i=0;i<5;i++){
		printf("%d ",B[i]);
	}
	swaparr(A,B,5);
	printswap_arr(A,B,5);
	
return 0;
}
