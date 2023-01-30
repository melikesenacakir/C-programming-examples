#include<stdio.h>

int hesapla(){
	int max,num1,num2,num3;
	printf("bir sayi giriniz: \n");
	scanf("%d",&num1);
	printf("ikinci bir sayi giriniz: \n");
	scanf("%d",&num2);
	printf("ucuncu bir sayi giriniz: \n");
	scanf("%d",&num3);	    	
		
	if(num1>num2 && num1>num3){
		max=num1;
	}
	else if(num2>num1 && num2>num3){
		max=num2;
	}
	else if(num3>num2 && num3>num1){
		max=num3;
	}
	return max;
}
/* 2.bir yol=
if(num1>num2)
     if(num1>num3)
        return num1;
     else return num3;
   if(num2>num3)
     if(num2>num1)
	    return num2;
		else return num3;*/
		
main(){
	
	char mesaj[100];
	printf("Yeni yilda bakiyeniz= %d TL \n",hesapla());
	
	return 0;
}
