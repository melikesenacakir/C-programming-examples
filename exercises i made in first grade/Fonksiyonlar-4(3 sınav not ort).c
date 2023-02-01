#include<stdio.h>
float sayiort(int s1,int s2,int s3){
	float ort;
	ort=(s1+s2+s3)/3.0;
	return ort;
}
main(){
	int a,b,c;
	printf(" uc sinav notunuzu da giriniz: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("not ortalamaniz: %.2f",sayiort(a,b,c));
	
	
	return 0;
}
