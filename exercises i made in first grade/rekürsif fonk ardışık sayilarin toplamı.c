#include<stdio.h>
int toplam(int n){
	if(n==0){
		return 0;
	}
	else{
		return n+toplam(n-1);
	}
	
}
main(){
	int sayi;
	printf("ardisik kac sayinin toplami girilsin? ");
	scanf("%d",&sayi);
	printf("ardisik %d sayinin toplami=%d",sayi,toplam(sayi));
}
