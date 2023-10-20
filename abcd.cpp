#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head;

 void createLL(int n);
 void insertnodebeg(int data);
 void insertnodend(int data);
 void displayLL();
 
 int main()
 {
 	int n,data,data2;
 	scanf("%d",&n);
 	  
 	createLL(n);
 	displayLL();
 	insertnodebeg(data);
 	displayLL();
 	insertnodend(data2);
 	displayLL();
 	
 }
  void createLL(int n)
  {
  	struct node *newnode,*temp;
  	int data;
  	head=(struct node*)malloc(sizeof(struct node));
  	if(head==NULL)
  	printf("unable to allocate memory");
  	else
  	{
  		scanf("%d",&data);
  		head->data=data;
  		head->next=NULL;
  		temp=head;
  		
  		for(int i=2;i<=n;i++)
  		{
  			newnode=(struct node*)malloc(sizeof(struct node));
  			 if(head==NULL)
  		     {
  				printf("unable to allocate memory");
  				break;
			  }
		      else
			  {
			  	scanf("%d",&data);
			  	newnode->data=data;
			  	newnode->next=NULL;
			  		temp->next=newnode;
			  		temp=temp->next;
			  }
		  }
	  }
  }
  
  void insertnodebeg(int data)
  {
  	struct node*newnode;
  	newnode= (struct node*)malloc(sizeof(struct node));
  	if(newnode==NULL)
  	{
  		printf("unable to allocate memory");
	  }
	else
	{
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}
  }
  
 void insertnodend(int data2)
 {
 	struct node*newnode,*temp;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	if(newnode==NULL)     
  	{
  		printf("unable oton allocate memory");
	  }
	  else
	  {
	  	scanf("%d",&data2);
	  	newnode->data=data2;
		newnode->next=NULL;
		temp=head;
		while(temp!=NULL && temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		
	  }
 }
  
void   displayLL()
  {
  	struct node*temp;
  	if(head==NULL)
  	printf("list is empty");
  	else
  	{temp=head;
  		while(temp!=NULL)
  		{
  			printf("%d",temp->data);
  			temp=temp->next;
		  }
	  }
  }