#include<stdio.h>
#include<math.h>

 main(){
	 int a,p,k;float h,b,c;
	 printf("p kenar�n� giriniz");
	 scanf("%d",&p);
	 printf("k kenar�n� giriniz");
	 scanf("%d",&k);
	  a=p+k;
	 h=sqrt(p*k);
	 b=sqrt(a*k);
	 c=sqrt(a*p);
	 printf("H=%f \n B=%f \n C=%f",h,b,c);
	return 0;
}
