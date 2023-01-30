#include<stdio.h>
main(){
	int sayi,i,sonuc,a;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	printf("\n\n%d sayisinin carpim tablosu\n\n",sayi);
	
	for(i=1;i<=sayi;i++){
		sonuc=sayi*i;
		printf("%d x %d = %d\n",i,sayi,sonuc);
			}
	
	return 0;
}


//girilen bir sayýnýn çarpým tablosu
