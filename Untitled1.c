#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int front=-1;
int rear=-1;
int queue[maxsize];
void delete(){
	int item;
	if (front=-1 || front > rear){
		printf("UNDERFLOW\n");
		return;
	}
	else
	{
	    item=queue[front];
		if(front==rear)
		{ 
		   front = -1;
		   rear = -1;
		}
		else{
		   front=front + 1;
		}
		printf("value deleted is %d\n", item);
    }
}
void insert()
{
	int item;
	printf("enter the element:\n");
	scanf("\n%d",&item);
	if(rear==maxsize-1)
	{
		printf("OVERFLOW\n");
		return;
	}
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
}
void traverse()
{
	int i;
	if(rear==-1)
	{
		printf("empty queue\n");
	}
	else
	{
		printf("Queue content is \n");
		for(i=front;i<rear;i++)
		{
			printf("%d\t",queue[i]);
		}
		printf("\n");
	}
}
int main()
{
	int item;
	int ch=1;
	while(ch!=4)
	{
		printf("1:insert\n");
		printf("2:delete\n");
		printf("3:traverse\n");
		printf("4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:traverse();
			break;
			case 4:exit(0);
		}
	}
	return 0;
}
