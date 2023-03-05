#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char dizi[3][3]={'-','-','-','-','-','-','-','-','-'};
int counter=0;

int table(int column,int row,char selection){	
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==row && j==column){
				 dizi[i][j]=selection;
				 break;   
			}
		}
	}
	    for(i=0;i<3;i++){
		   	printf("   %c  *   %c   *   %c   \n",dizi[i][0],dizi[i][1],dizi[i][2]);
		    if(i!=2)
			    printf("***********************\n");
		}

}

int tictactoe(){
	int i,j,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j && dizi[i][j]=='X'){
				cnt1++;
			}
			else if(i==0 && j==2 && dizi[i][j]==dizi[j][i] && dizi[i][j]=='X')
			   cnt1+=2;
			else if(i==j && dizi[i][j]=='O')
				cnt2++;	
			else if(i==0 && j==2 && dizi[i][j]==dizi[j][i] && dizi[i][j]=='X')
			    cnt2++;
			    
		}
	}
	//i=column j=row
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(dizi[j][i]=='X')
			   cnt3++;
			else if(dizi[j][i]=='O')
			   cnt4++;
		}
		if(cnt3==3 || cnt4==3)
		    break;
		else{
			cnt3=0;
			cnt4=0;
		}
	}
	//i=row j=column
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(dizi[i][j]=='X')
			  cnt5++;
			else if(dizi[i][j]=='O')
			  cnt6++;
		}
		if(cnt5==3||cnt6==3)
		   break;
		else{
			cnt5=0;
			cnt6=0;
		}
		  
	}
	if(cnt1==3 ||cnt2==3||cnt3==3||cnt4==3||cnt5==3||cnt6==3){
		printf("Congratulation you win!");
		system("color 02");
		return 1;
	}
	else if(counter==8){
		printf("GAME OVER!,TRY AGAIN");
		system("color 04");
		return 1;
	}
	else
	   return 0;
}


int main(){
	int i,j,column,row;
	char selection[2]={'X','O'}; 
	  for(i=0;i<3;i++){
		   	printf("   -  *   -   *   -   \n");
		    if(i!=2)
			    printf("***********************\n");
		}
	 
	    while(counter<9){
	    	
		    printf("what want you add X(0) or O(1) ?");
			scanf("%d",&i);
			
			printf("\nin which column and row do you want to add it? ");
			printf("\ncolumn= ");
			scanf("%d",&column);
			
			printf("\nrow= ");
			scanf("%d",&row);
             
			table(column,row,selection[i]);
			if(tictactoe()==1)
			    break;
			  
			counter++;
		}
	
	return 0;
}
