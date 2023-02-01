#include<stdio.h>
#include<math.h>
main(){
int i,j,k,dizi[10];
for(i=0;i<10;i++){
	printf("dizinin [%d]. elemanini giriniz: ",i);
	scanf("%d",&dizi[i]);
}
for(j=0;j<10;j++){
	printf("%d\t",dizi[j]);
}
printf("\ndizinin tersten yazilisi\n");
for(k=9;k>=0;k--){
	if(dizi[k]/10!=dizi[k]%10){
		dizi[k]=10*(dizi[k]%10)+dizi[k]/10;
		printf("%d\t",dizi[k]);
	}
	else{
		printf("%d\t",dizi[k]);
	}
}
	return 0;
}
