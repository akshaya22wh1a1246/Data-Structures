#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};


void display(struct node *head);
struct node* dll_search(struct node *head,int key);

int main()
{
	int key;
	
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->prev=NULL;
	head->next=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->prev=NULL;
	current->next=NULL;
	
	head->next=current;
	
	printf("Enter key:");
	scanf("%d",&key);
	head=dll_search(head,key);
	
	
}

struct node* dll_search(struct node *head,int key)
{
	int c=0;
	struct node *temp=head;
	
	if(temp==NULL)
		printf("DLL is Empty");
	else
	{
		while(temp!=NULL)
		{
			if(temp->data==key)
				c++;
			temp=temp->next;
		}
	}
	if(c==0)
		printf("Search key is not found");
	else
		printf("Search key is found");
			
	return head;
}










