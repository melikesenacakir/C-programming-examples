#include<stdio.h>
#include<stdlib.h>
#define size 5

int sum(int arr[],int n){
	if(n<size){
		return arr[n]+sum(arr,++n);
	}
	else{
		return 0;
	}
}

float average(int arr[]){
	float sum1;
	sum1=sum(arr,0);
	printf("\nsum= %.1f\n",sum1);
	return sum1/size;
}

void updateaverage(int *arr,int a){
    arr[a]+=20;
}

main(){
	int a,i,arr[size]={3,55,67,89,5};
	printf("\nthe average of the array is: %.2f\n",average(arr));
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\nwhich index do you want to update ? ");
	scanf("%d",&a);
	updateaverage(arr,a);
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\nthe average of the array is: %.2f",average(arr));
	
	
	return 0;
}
