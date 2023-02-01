#include<stdio.h>
main(){
 char sehir[3][15];
 int i;
 
 for(i=0;i<3;i++){
 	printf("%d.sehiri giriniz: ",i+1);
 	scanf("%s",&sehir[i]);
 }
for(i=0;i<3;i++){
	printf("%d. sehir: %s\n",i+1,sehir[i]);
}
  
 
  	
  
    
    
    
    
return 0;
}
