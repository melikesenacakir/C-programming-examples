#include<stdlib.h>
#include<stdio.h>


typedef struct node{
	int data;
	struct node *next;
}node;


node *addlast(node *head,int maindata){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=maindata;
	temp->next=NULL;
	if(head==NULL){
       head=temp;
	}
	else{
	    node *last=head;
	    while(last->next!=NULL){
	    	last=last->next;
		}
		last->next=temp;
	}
	return head;
}


int research(node *head,int redata){
	node *temp=head;
		while(temp!=NULL){
			if(temp->data==redata)
		   		return 1;
			else
			    temp=temp->next;
		}
		return 0;	
}

void printlist(node *head){
	printf("LİST=> ");
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
}


main(){
	node *head=NULL;
	int maindata;
	int redata=5;//data that we want to look if it exists in the list or not
	printf("which data want you enter?");
	scanf("%d",&maindata);
	while(maindata!=-1){
		head=addlast(head,maindata);
		printf("which data want you enter");
		scanf("%d",&maindata);
	}
	printlist(head);
	if(research(head,redata)==1)
	    printf("data %d exists in the list ",redata);	
	else
	    printf("data %d does not exist in the list",redata);
	
	
	
	return 0;
}
