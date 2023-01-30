#include<stdio.h>
main(){
	printf("1- Dizi elemanlarini toplar\n");
	printf("2-Dizinin ortalamasini bulur\n");
	printf("3-Dizinin ortalamasindan buyuk olan elemanlari gosterir\n");
	printf("4-Dizinin elemanlarini baska bir diziye tersten yerlestirir\n");
	printf("5-Dizinin en kucuk ve en buyuk elemanini bulur\n");
	printf("6-Dizi elemanlarýný kucukten buyuge dogru siralayarak ayni diziyi tekrardan olusturur\n\n");
	
	int islem,i,j,n,k,l,f,min;
	float ort;
	int toplam=0;
	printf("dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	int A[n];
	int eb=0,ek=0;
	
	for(i=0;i<n;i++){
		printf("dizinin elemanlarini giriniz: ");
		scanf("%d",&A[i]);
	}
	
	while(islem!=-1){
		printf("bir islem seciniz: ");
    	scanf("%d",&islem);
    	switch(islem){
    		case 1:
			     for(j=0;j<n;j++){
    			 toplam=toplam+A[j];
				 }
				 printf("Toplam: %d\n",toplam);
				 toplam=0;
				 break;
    	    case 2:
			     for(k=0;k<n;k++){
			     	toplam=toplam+A[k];
				 }		 
				 ort=toplam/n;
				 printf("ort: %.2f\n",ort);
				 toplam=0;
				 break;
			case 3:
				for(f=0;f<n;f++){
			     	toplam=toplam+A[f];
				 }		 
				 ort=toplam/n;
				 printf("ort: %f\n",ort);
			     for(l=0;l<n;l++){
			     	if(A[l]>ort){
			     		printf("%d. eleman %d\n",l,A[l]);
					 }
				 }	
				 toplam=0; 
				 break;
			case 4:
				for(i=0;i<n;i++){
					printf("%d\n",A[i]);
				}
				printf("tersten yazilisi: \n");
				for(j=n-1;j>=0;j--){
					printf("%d\n",A[j]);
				}
				break;
		    case 5:
				for(i=0;i<n;i++){
					if(A[i]>eb){
						eb=A[i];
					}
				}
				printf("En buyuk sayimiz: %d\n",eb);
				ek=eb;
				for(j=0;j<n;j++){
					if(A[j]<ek){
						ek=A[j];
					}
				}
				printf("En kucuk sayimiz: %d\n",ek);
			
				break;
		    case 6:
			    for(i=0;i<n;i++){
				    for(j=0;j<n;j++){
				     	if(A[j]<A[i]){
				    	min=A[i];
					    A[i]=A[j];
				     	A[j]=min;		
				     }
				   }
			     }
			     	printf("kucukten buyuge dogru siralanmis hali:  ");	
			     	for(i=n-1;i>=0;i--){
			     		printf("%d  ",A[i]);
					 }
			     
			    break;
			
			default:
			printf("1-6 arasi sayilar giriniz!!\n");		
				 }
			
		}
    		
		
	
	return 0;
}
