#include <stdio.h>
#include <stdlib.h>

typedef struct date{
	int day;
	int month;
	int year;
}Date;

void printdate(Date dt){
	if(dt.day<31 && dt.month<=12)
	  printf("the next day is %d.%d.%d",dt.day+1,dt.month,dt.year);
	else if(dt.day>=31 && dt.month<12){
		printf("the next day is %d.%d.%d",dt.day-30,dt.month+1,dt.year);
	}
	else if(dt.day>=31 && dt.month>=12){
		printf("the next day is %d.%d.%d",dt.day-30,dt.month-11,dt.year+1);
	}
}

Date gettvalue(){
	Date dt;
	printf("enter the day: ");
	scanf("%d",&dt.day);
	printf("enter month: ");
	scanf("%d",&dt.month);
	printf("enter year: ");
	scanf("%d",&dt.year);
	
	return dt;
}

main(){
	Date todaysdate;
	todaysdate=gettvalue();
	printdate(todaysdate);
	
}
