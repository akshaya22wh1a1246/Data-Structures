#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

int main()
{
	struct node * head=(struct node*)malloc(sizeof(struct node));
	head->prev=NULL;
	head->data=10;
	head->next=NULL;
	
	struct node * current=(struct node*)malloc(sizeof(struct node));
	current->prev=NULL;
	current->data=20;
	current->next=NULL;
	head->next=current;
	
	printf("DLL successfully created");
	printf("\n%d->%d",head->data,current->data);
	
}
