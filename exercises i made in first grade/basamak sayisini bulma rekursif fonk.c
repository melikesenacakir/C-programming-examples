#include<stdio.h>

int basamaktop(int num,int sayac){
	if(num/10>0){
		sayac++;
	}
	else{
		return sayac;
	}
	return basamaktop(num/10,sayac);
	
}




main(){
	int num;
	int sayac=1;
	printf("please enter the num: ");
	scanf("%d",&num);
	printf("%d",basamaktop(num,sayac));
	return 0;
}
