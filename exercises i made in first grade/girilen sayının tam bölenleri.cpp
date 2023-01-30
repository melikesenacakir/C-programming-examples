#include<stdio.h>
main(){
  int a,i;
  printf("bir sayi giriniz: ");
  scanf("%d",&a);
  printf("%d sayisinin tam bolenleri:\n",a);
  for(i=1;i<=a;i++){
  	if(a%i==0){
  		printf("%d\n",i);
	  }
  }
	
	
	return 0;
}
