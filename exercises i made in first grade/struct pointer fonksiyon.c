#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
	char name[10];
	int age;
	int id;
}Employee;


Employee *fonk1(int n){
	Employee *bilgi;
	bilgi=(Employee*)malloc(sizeof(Employee)+n);
	int i=0;
	while(i<n){
		printf("ismi giriniz: ");
		scanf("%s",(bilgi+i)->name);
		printf("yasinizi giriniz: ");
		scanf("%d",&(bilgi+i)->age);
		printf("id nizi giriniz: ");
		scanf("%d",&(bilgi+i)->id);
		i++;
	}
	
	return bilgi;
	
}
void *fonk2(int n,Employee **ptrArr){
	Employee *bilgi;
	bilgi=(Employee*)malloc(sizeof(Employee)+n);
	int i=0;
	while(i<n){
		printf("ismi giriniz: ");
		scanf("%s",(bilgi+i)->name);
		printf("yasinizi giriniz: ");
		scanf("%d",&(bilgi+i)->age);
		printf("id nizi giriniz: ");
		scanf("%d",&(bilgi+i)->id);
		i++;
	}
	*ptrArr=bilgi;
	
}

void printthis(Employee *bilgi,int n){
	int i=0;
	while(i<n){
		printf("\n%d.kisinin adi: %s yasi: %d id: %d\n ",i+1,(bilgi+i)->name,(bilgi+i)->age,(bilgi+i)->id);
		i++;
	}
	
}
main(){
	int n;
	Employee bilgi[n];
	Employee *ptrArr;
	printf("kac kisinin bilgisini gireceksiniz: "),
	scanf("%d",&n);
	printthis(fonk1(n),n);
    fonk2(n,&ptrArr);
	
	return 0;
}
