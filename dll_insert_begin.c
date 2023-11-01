#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node* insert_begin(struct node *head);
void display(struct node *head);
struct node* insert_end(struct node *head);

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
	
	printf("Inserting at beginning:");
	head=insert_begin(head);
	display(head);
	printf("\nInserting at end:");
	head=insert_end(head);
	display(head);
	
}

struct node* insert_begin(struct node *head)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=30;
	new->prev=NULL;
	new->next=NULL;
	
	new->next=head;
	head->prev=new;
	head=new;
	
	return head;
}

struct node* insert_end(struct node *head)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=40;
	new->prev=NULL;
	new->next=NULL;
	
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
	new->prev=temp;
	
	return head;
}

struct node* insert_end(struct node *head)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=50;
	new->prev=NULL;
	new->next=NULL;	
	struct node *temp=head;
	struct node* temp2=NULL;
	int pos=3;
	pos--;
	while(pos!=1)
	{
		temp=temp->next;
		pos--;
	}
	
	temp->next=new;
	new->prev=temp;
	
	
	
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;

	}
	printf("NULL");
	
}
	

