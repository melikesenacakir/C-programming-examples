#include<stdio.h>
#include<stdlib.h>
#define n 5


int main(){
	int A[n],B[n],i,j=0,palindrome=0;
	for(i=0;i<n;i++){
		printf("A[%d]= ? ",i+1);
		scanf("%d",&A[i]);
		B[n-i-1]=A[i];
	}   
	for(i=0;i<n;i++){
		if(A[i]==B[i]){
			palindrome++;
		}
	}
	if(palindrome==5)
		printf("palindrome array");
	else
	  printf("not palindrome");
	
}
