#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};


void display(struct node *head);
struct node* del_random(struct node *head);

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
	head=del_random(head);
	display(head);
	
}

struct node* del_random(struct node *head)
{
	struct node *temp=head;
	struct node *new=NULL;
	int pos=1;
	
	if(pos==0)
		printf("DLL is Empty");
	else if(pos==1)
	{
		head=head->next;
		free(temp);
		temp->prev=NULL;
	}
	
	else
	{
		while(pos!=1)
		{
			new=temp;
			temp=temp->next;
			pos--;
		}
		new->next=temp->next;
		free(temp);
		new->next=NULL;
			
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

