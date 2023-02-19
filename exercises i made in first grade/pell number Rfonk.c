#include<stdio.h>

int pellnum(int num){
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	else{
		return 2*pellnum(num-1)+pellnum(num-2);
	}
}

main(){
	int num;
	printf("enter a num: ");
	scanf("%d",&num);
	printf("pell number %d value is %d",num,pellnum(num));
	return 0;
}
