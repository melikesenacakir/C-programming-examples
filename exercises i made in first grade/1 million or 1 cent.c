#include<stdio.h>
#include<math.h>
main(){
	int i,sec,j;
	double toplam=0.01;
	printf("1-one cent per day(1 year long))\n");
	printf("2-one million right now\n\n");
	
	printf("select one number above: ");
	scanf("%d",&sec);
	
	switch(sec){
		
		case 1: 
	        for(i=1;i<=12;i++){
			      for(j=1;j<=30;j++){
			      	 printf("month-%d and day-%d:",i,j);
				    toplam+=toplam;
				    printf("\nyou earned %lf dollars\n",toplam);
				  }
		          
		    }
		    
		break;
		
		case 2:
			printf("you earned 1 millon dollar!");
		break;	
		
	}



	
	
	return 0;
}
