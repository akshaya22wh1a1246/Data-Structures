#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

void traverse(struct node *head);

int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->prev=NULL;
	head->data=10;
	head->next=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->prev=NULL;
	current->data=20;
	current->next=NULL;
	head->next=current;
	
	printf("DLL successfully created\n");
	traverse(head);
	
}

void traverse(struct node *head)
{
	struct node *temp=head;
	int count=0;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL");
	printf("\nNo.of nodes:%d",count);
}
	
	
	
	
	
