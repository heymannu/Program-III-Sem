#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *head;
struct node *temp;

void create(){

	int choice=1;
	while(choice==1)
	{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter data :\n");
	scanf("%d",&newnode->data);
	newnode->link=0; 
	
	if(head==0)
	{
		temp=head=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
		}
		printf("Do u wish to continue press 1 for yes 0 for no");
		scanf("%d",&choice);
	}
}
void display()
{
	temp=head;
	printf("Linked list is:"); 
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->link;
		}
		
	}
		
	void insert_at_beginning()
	{	
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data you wish to insert");
		scanf("%d",&newnode->data); 
		temp=head;
		newnode->link=head;
		head=newnode;
		 
	}
	
	void insert_at_end()
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data you wish to insert");
		scanf("%d",&newnode->data);
		temp=head;
		while(temp->link!=0)
		{
			temp=temp->link;
			}
		temp->link=newnode;
		}	
int main(){
	create();
	display();
	insert_at_beginning();
	display();
	insert_at_end();
	display();
	return 0;
}
