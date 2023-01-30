#include<stdio.h>
#include<math.h>
main(){
	int islem,a,alan,cevre,sonuc,r;
	const float pi=3.14;
	
	printf("1-Karede alan ve cevre hesabi \n");
	printf("2-Girilen sayinin kubu \n");
	printf("3-Cemberde alan ve cevre hesabi \n");
	printf("4- (4-5x2+7x+9) x e gore islemin sonucu \n\n\n");
	
	printf("Bir islem seciniz: ");
	scanf("%d",&islem);

	switch(islem){
		case 1: printf("karenin bir kenarini giriniz: ");
		        scanf("%d",&a);
		        alan=a*a;
		        cevre=a*4;
		        printf("%d\n%d",alan,cevre);
		        break;
		case 2: printf("bir sayi giriniz: ");
		        scanf("%d",&a);
		        sonuc=pow(a,3);
		        printf("%d",sonuc);
		        break;
		case 3: printf("cemberin cabini giriniz: ");
		        scanf("%d",&r);
		        alan=pi*r*r;
		        cevre=2*pi*r;
		        printf("%d%d",alan,cevre);
		        break;
		case 4: printf("bir x sayisi giriniz: ");
		        scanf("%d",&a);
		        sonuc=4-5*a*2+7*a+9;
		        printf("%d",sonuc);
		        break;
	    default: printf("gecerli bir islem seciniz");
		         break;			        
		
	}
	
	
	
	return 0;
}
