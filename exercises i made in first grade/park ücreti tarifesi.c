#include<stdio.h>
main(){
	printf("       ****PARK UCRETI TARIFELERIMIZ****");
	printf("\n\n");
	printf("            0-4 saat arasi:10TL \n");
	printf("            5-8 saat arasi:12TL \n");
	printf("            9-12 saat arasi:15TL \n");
	printf("           13 saat ve uzeri:20TL \n\n\n");
	
	int saat,i;
	
	printf("aracinizin kac saat durdugunu giriniz: ");
	scanf("%d",&saat);
	
	if(saat<5){
		printf("10tl");
	}
	else if(saat>5 && saat<9){
		printf("12tl");
	}
	else if(saat>8 && saat<13){
		printf("15tl");
	}
	else if(saat>13){
		printf("20tl");
	}
	
	
	return 0;
}
