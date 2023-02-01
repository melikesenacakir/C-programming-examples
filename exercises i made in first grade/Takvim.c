#include<stdio.h>
main(){
int num1,day,month;
	printf("enter a year: ");
	scanf("%d",&num1);
	printf("enter a day: ");
	scanf("%d",&day);
	printf("enter a month: ");
	scanf("%d",&month);
	if(num1%100==0 ){
		if(num1%400==0){
			if(num1%4==0){
				printf("its a leap year\n");
				if(day+1>31 && month+1>12){
			  		day=day%10;
					month=1;
					num1=num1+1;
				}
				else if(day+1>31){
					day=day%10;
					month=month+1;
					
				}
				else{
					day=day+1;
				}
				
				printf("the next day is %d.%d.%d",day,month,num1);
			}
			else{
			  	printf("its not a leap year\n");
			  	if(day+1>31 && month+1>12){
			  		day=day%10;
					month=1;
					num1=num1+1;
				}
				else if(day+1>31){
					day=day%10;
					month=month+1;
					
				}
				else{
					day=day+1;
				}
				
				printf("the next day is %d.%d.%d",day,month,num1);
			}
		}
		else{
			printf("its not a leap year\n");
			if(day+1>31 && month+1>12){
			  		day=day%10;
					month=1;
					num1=num1+1;
				}
				else if(day+1>31){
					day=day%10;
					month=month+1;
					
				}
				else{
					day=day+1;
				}
				
				printf("the next day is %d.%d.%d",day,month,num1);
		}
		
	}
	else{
		if(num1%4==0 ){
				printf("its a leap year\n");
				if(day+1>31 && month+1>12){
			  		day=day%10;
					month=1;
					num1=num1+1;
				}
				else if(day+1>31){
					day=day%10;
					month=month+1;
					
				}
				else{
					day=day+1;
				}
				
				printf("the next day is %d.%d.%d",day,month,num1);
			}
			else{
			  	printf("its not a leap year\n");
			  	if(day+1>31 && month+1>12){
			  		day=day%10;
					month=1;
					num1=num1+1;
				}
				else if(day+1>31){
					day=day%10;
					month=month+1;
					
				}
				else{
					day=day+1;
				}
				
				printf("the next day is %d.%d.%d",day,month,num1);
			}
	}
	
	
	
	
	
	return 0;
}

