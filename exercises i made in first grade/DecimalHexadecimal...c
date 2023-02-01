#include<stdio.h>
main(){
	char myChar1;
	printf("bir karankter giriniz: ");
	scanf("%c",&myChar1);
	
	if(myChar1>='A' && myChar1<='Z'){
		printf("it a uppercase\n");
	}
	else if(myChar1>='a' && myChar1<='z'){
		printf("its lowercase\n");
	}
	else if(myChar1>='0' && myChar1<='9'){
		printf("its a digit");
	}
	else{
		printf("its something else");
	}
	
	
	return 0;
}
