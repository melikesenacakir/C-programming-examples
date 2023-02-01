#include<stdio.h>

int fonk(int s1,int num,int counter){
	if(s1!=0){
		printf("sayi giriniz: ");
	    scanf("%d",&s1);
	}
	else{
		return counter;
	}
	if(s1<num){
		counter++;
	}
	return fonk(s1,num,counter);
}
main(){
	int counter=0,num,s1=-1;
	printf("with which number do you want to compare? ");
	scanf("%d",&num);
	printf("%d",fonk(s1,num,counter));
	return 0;
}
