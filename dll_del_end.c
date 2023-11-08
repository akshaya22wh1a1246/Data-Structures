#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};


void display(struct node *head);
struct node* del_end(struct node *head);

int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->prev=NULL;
	head->next=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->prev=NULL;
	current->next=NULL;
	
	head->next=current;
	head=del_end(head);
	display(head);
	
}

struct node* del_end(struct node *head)
{
	struct node *temp=head;
	
	if(temp==NULL)
		printf("DLL is Empty");
	else if(temp->next==NULL)
	{
		head=head->next;
		free(temp);
		temp->prev=NULL;
	}
	
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;	
	}
	return head;
}

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










