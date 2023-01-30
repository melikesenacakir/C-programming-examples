#include<stdio.h>
main(){
	int el,normal,i,tl=0;  
	
    printf("EL BAGAJI ICIN 8KG HAKKINIZ VARDIR \n");
    printf("NORMAL BAGAJ ICIN 15KG HAKKINIZ VARDIR\n\n\n");
    
    printf("el bagaji agirliginizi giriniz: ");
    scanf("%d",&el);
	printf("normal bagaj agirliginizi giriniz: ");
	scanf("%d",&normal);
	    
    
    if(el>8){
    	for(i=1;i<=el-8;i++){
    		tl=tl+4;
		}
	}
	printf("el bagaji icin odeyeceginiz miktar: %d\n",tl);
	if(normal>15){
		for(i=1;i<=normal-15;i++){
			tl=tl+5;
		}
	}
	printf("odeyeceginiz miktar: %d",tl);
	
	return 0;
}
