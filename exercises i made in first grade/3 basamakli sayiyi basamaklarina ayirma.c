#include<stdio.h>
main(){
	int sayi,birler,onlar,yuzler;
	printf("3 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	yuzler=(sayi/10)/10;
	printf("%d\n",yuzler);
	onlar=(sayi/10)%10;
	printf("%d\n",onlar);
	birler=sayi%10;
	printf("%d",birler);
	
	return 0;
}
