#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;struct node* link;
};
struct node *front,*rear;
void insert(int n)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;temp->link=NULL;
	if(front==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		/*struct node* t=front;
		while(t->link!=NULL)
		t=t->link;
		t->link=temp;
		rear=temp;*/
		rear->link=temp;
		rear=temp;
	}
}
void delete()
{
	struct node* t=front;
	front=t->link;
	printf("the number deleted is %d\n",t->data);
	free(t);
}
void traverse()
{
	printf("the queue is\n");
	struct node* t=front;
	while(t->link!=NULL)
	{
		printf("%d\n",t->data);
		t=t->link;
		}
		printf("%d\n",t->data);
}
void main()
{
	int i,n;
	for(i=0;i<6;i++)
	{
		printf("enter the data to be inserted\n");
		scanf("%d",&n);
		insert(n);
	}
	traverse();
	delete();delete();delete();traverse();insert(4);insert(2);traverse();
}
