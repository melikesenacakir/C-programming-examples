#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
int a,b;float x,alan,R;
const float pi=3.14;
printf("Kosegenleri giriniz");
scanf("%d%d",&a,&b);
printf("aciyi  giriniz");
scanf("%f",&x);
R=x*pi/180;
alan=a*b*(0.5)*sin(R);
printf("ALAN=%f",alan);
	
	return 0;
}
