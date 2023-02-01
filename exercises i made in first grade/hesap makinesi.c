#include<stdio.h>
main(){
	int s1,s2,sonuc;
	char islem;
	printf("islemi girin: ");
	scanf("%s",&islem);
	printf("bir sayi giriniz: ");
	scanf("%d",&s1);
	printf("bir sayi daha giriniz: ");
	scanf("%d",&s2);
	
	switch(islem){
		case '*': sonuc=s1*s2;
		          printf("%d",sonuc);
		          break;
		case '+': sonuc=s1+s2;
		          printf("%d",sonuc);
		          break;
		case '-': sonuc=s1-s2;
		          printf("%d",sonuc) ;
				  break;
        case '/': sonuc=s1/s2;
		          printf("%d",sonuc);
				  break;				           
		
		
	}
	
	return 0;
}
