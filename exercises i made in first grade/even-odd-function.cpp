#include<stdio.h>

int isEven(int num){
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int isOdd(int number){
	if(isEven(number)==1){
		return 0;
	}
	else{
		return 1;
	}
}
main(){
	int sayi,i;
	for(i=1;i<5;i++){
	printf("%d. sayiyi giriniz: ",i);
	scanf("%d",&sayi);
	printf("CIFT=%d TEK=%d\n",isEven(sayi),isOdd(sayi));
	}
	
	
	return 0;
}
