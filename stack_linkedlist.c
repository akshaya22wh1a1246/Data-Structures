#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *link;
}*top=NULL;

int isEmpty()
{
	return top==NULL;
}

int push(int data)
{
	struct node *new=malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;
	
	new->link=top;
	top=new;
	return top->data;
}

int pop()
{
	struct node *temp=top;
	if(isEmpty())
		printf("Stack is Empty");
	else
	{
		top=temp->link;
		free(temp);
		temp=NULL;
		return top->data;
	}
}

int peek()
{
	if(isEmpty())
		printf("Stack is empty");
	return top->data;
}

void display()
{
	struct node *temp=top;
	if(isEmpty())
		printf("Stack is Empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}
}


int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	printf("\nIntial stack values:");
	display();
	printf("\nTop value:");
	printf("%d",peek());
	pop();
	pop();
	printf("\nAfter pop operation");
	display();
	if(isEmpty())
		printf("Stack is Empty");
	else
		printf("Stack is not empty");
	
}








	
	
