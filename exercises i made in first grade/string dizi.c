#include<stdio.h>
main(){
	printf("1- str1 dizisinin uzunlugunu hesapla\n");
	printf("2- str2 dizisinin uzunlugunu hesapla\n");
	printf("3-str1 ve str2 dizilerini birlestir\n");
	printf("4-str1 dizisindeki en buyuk karakteri bul\n");
	printf("5- str2 dizisindeki en kucuk karakteri bul\n\n");
	
	char str1[100],str2[100],str3[200];
	int islem,i,j,k=0,l=0,max,min;
	
	printf("bir islem seciniz: ");
	scanf("%d",&islem);
	
	printf("str1 icin bir kelime girin: ");
	scanf("%s",str1);
	printf("str2 icin bir kelime giriniz: ");
	scanf("%s",str2);
	
	for(i=0;str1[i]!='\0';i++){
	 k++;
	}
	for(j=0;str2[j]!='\0';j++){
		l++;
	}
	while(islem!=-1){
		switch(islem){
			case 1:
				printf("str1 dizisinin uzunlugu: %d",k);
				islem=-1;
				
				break;
			case 2:
			    printf("str2 dizisinin uzunlugu: %d",l);
				islem=-1;	
			    break;
			case 3:
			    for(i=0;str1[i]!='\0';i++){
			    str3[i]=str1[i];	
				}    
				for(j=0;str2[j]!='\0';i++,j++){
				str3[i]=str2[j];
				}
				str3[i]='\0';
				printf("\n %s",str3);
				islem=-1;
				break;
			case 4:	
		      	max=str1[0];
			    for(i=0;str1[i]!='\0';i++){
			    	if(str1[i]>max){
			    		max=str1[i];
					}
				}
				printf("en buyuk karakteri: %c",max);
				islem=-1;
				break;
			case 5:
				min=str2[0];
				for(j=0;str2[j]!='\0';j++){
					if(str2[j]<min){
						min=str2[j];
					}
				}
				printf("en kucuk karakteri: %c",min);
				islem=-1;
				break;
			
		}
		
		
		
		
		
	}
   
	
	return 0;
}
