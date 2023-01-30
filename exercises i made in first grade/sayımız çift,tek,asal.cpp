#include<stdio.h>
main(){
	int sayi,i,flag=0,j;
	for(i=1;i<=10;i++){
		printf("bir sayi giriniz: ");
		scanf("%d",&sayi);
		if(sayi%2==0){
			printf("%d sayisi cifttir\n  ",sayi);	
			if(sayi==2){
				printf("ayrica asaldir\n");
			}
		}
		else{
			printf("%d sayisi tektir \n ",sayi);
			for(j=2;j<=sayi/2;j++){
				if(sayi%j==0){
					flag=1;
				}
			}
			if(flag==0){
			printf("sayimiz asaldir\n");
		}
		else{
			printf("asal degildir\n");
		}
		}
		
		
	}
	
	return 0;
}
