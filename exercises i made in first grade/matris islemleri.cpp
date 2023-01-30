#include<stdio.h>
main(){
	printf("1-Iki Matrisi Toplar\n");
	printf("2- Transpozesini Alir ( A Matrisi icin)\n");
	printf("3-Ýki Matrisi carpar\n");
	printf("4- Simetrik Kontrolu yap ( A Matrisi icin)\n");
	printf("5-Matrisin Tersini Al ( A Matrisi icin)\n\n\n");
	
	int i,n,islem,j,k,l,s,f,t;
	printf("satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n],B[n][n],C[n][n],transpose[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("A dizisinin [%d][%d]. elemanini giriniz: ",i,j);
		scanf("%d",&A[i][j]);
		}
	}
	for(s=0;s<n;s++){
	  for(f=0;f<n;f++){
	  	printf("B dizisini [%d][%d]. elemanini giriniz: ",s,f);
	  	scanf("%d",&B[s][f]);
	  }
	}
	
	while(islem!=-1){
	printf("Bir islem seciniz: ");
	scanf("%d",&islem);
	switch(islem){
		case 1: 
			for(i=0;i<n;i++){
			  for(j=0;j<n;j++){
			   C[i][j]=B[i][j]+A[i][j];
		       }	        	
		    }
		    for(k=0;k<n;k++){
		       for(l=0;l<n;l++){
		    	printf("%d \t",C[k][l]);
				}
				printf("\n");
		    	}
	      	break; 
	    case 2:
		     for(i=0;i<n;i++){
		     	for(j=0;j<n;j++){
				       if(i!=j){ 
					 	transpose[j][i]=A[i][j];
					 }
					else if(i==j){
		     		 transpose[i][j]=A[n-(i+1)][n-(j+1)];
					 }
				 }
			 }  
			 for(k=0;k<n;k++){
			 	for(l=0;l<n;l++){
				 printf("%d\t",A[k][l]);
				 }
				 printf("\n");
				 }		 
				 printf("TRANSPOSESÝ: \n");
			 for(k=0;k<n;k++){
			 	for(l=0;l<n;l++){
			 		printf("%d\t",transpose[k][l]);
				 }
				 printf("\n");
			 }	
			break;	
		case 3:
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					C[i][j]=A[i][j]*B[i][j];
				}
			}
			for(k=0;k<n;k++){
				for(l=0;l<n;l++){
					printf("%d\t",C[k][l]);
				}
				printf("\n");
			}
			break;
		case 4:
		     for(i=0;i<n;i++){
		     	for(j=0;j<n;j++){
		     		if(A[i][j]==A[j][i]){
		     			printf("%d ve %d degerleri icin simetriktir\n",i,j);
					 }
					 else{
					 	printf("%d ve %d degerleri icin simetrik degildir\n",i,j);
					 }
				 }
			 }	
			 break;
		case 5:
			printf("A matrisi:\n");
		     for(i=0;i<n;i++){
		     	for(j=0;j<n;j++){
		     		printf("%d\t",A[i][j]);
				 }
				 printf("\n");
			 }	 
			 printf("A matrisinin tersi:\n");
			 for(k=n-1;k>=0;k--){
			 	for(l=n-1;l>=0;l--){
			 		printf("%d\t",A[k][l]);
				 }
				 printf("\n");
			 }
			 break;
		       
	}
		
}
	
	
	return 0;
}
