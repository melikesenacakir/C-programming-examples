#include<stdio.h>
main(){
	int num,newnum,i,evensum=0,oddsum=0,difference;
	printf("enter a number: ");
	scanf("%d",&num);
	while(num>0){
		newnum=num%10;
		if(newnum%2==0){
		evensum+=newnum;
		}
		else{
			oddsum+=newnum;
		}
		num=num/10;
	}
   if(evensum>oddsum){
   	difference=evensum-oddsum;
   	printf("%d-%d=%d",evensum,oddsum,difference);
   }
   else{
   	difference=oddsum-evensum;
   	printf("%d-%d=%d",oddsum,evensum,difference);
   }
	return 0;
}
//the sum of odd numbers minus the sum of odd numbers is the result 
//ex: 24->2 and 4 are even so the sum of these numbers minus the sum of the odd numbers in 24(there is no odd number). 6-0=6
