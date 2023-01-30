#include<stdio.h>
main(){
	int sayi,i,toplam=0,ort;
	int dizi[100];
	printf("dizinin kac elemani olsun: ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		printf("%d.elemani: ",i+1);
	    scanf("%d",&dizi[i]);
	}  
	
	for(i=0;i<sayi;i++){
		printf("%d.eleman= %d\n",i+1,dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("Toplam: %d\n",toplam);
	ort=toplam/sayi;
	printf("Ortalama: %d",ort);
	
	
	
	return 0;
}
