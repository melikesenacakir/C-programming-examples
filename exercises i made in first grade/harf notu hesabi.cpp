#include<stdio.h>
#include<math.h>
main(){
	float ort;
	int s1,s2,proje;
	
	printf("ilk sinav notunu giriniz: ");
	scanf("%d",&s1);
	printf("ikinci sinav notunu giriniz: ");
	scanf("%d",&s2);
	printf("bir proje notu giriniz: ");
	scanf("%d",&proje);
	
	ort=(s1+s2+proje)/3;
	printf("ortalamaniz: %.1f \n",ort);
	
	if(ort<50){
		printf("FF");
	}
	if(ort>50 && ort<60){
		printf("DD");
	}
	if(ort>60 && ort<70){
		printf("CC");
	}
	if(ort>70 && ort<85){
		printf("BB");
	}
	if(ort>=85){
		printf("AA");
	}
	
	return 0;
}
