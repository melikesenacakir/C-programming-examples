#include<stdio.h>
#include<math.h>

void dortgen(int en,int boy){
	int i,j;
	for(i=1;i<=boy;i++){
		for(j=1;j<=en;j++){
			if(j==1 || j==en || i==1 || i==boy){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}

main(){
	int en,boy;
	printf("dortgenin enini giriniz: ");
	scanf("%d",&en);
	printf("dortgenin boyunu giriniz: ");
	scanf("%d",&boy);
	dortgen(en,boy);

	return 0;
}
