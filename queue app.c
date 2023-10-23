#include<stdio.h>
#include<conio.h>
#define maxsize 5
void insert();
void del();
void display();
int front = -1, rear = -1;
int queue[maxsize];
void main ()
{
    int choice;
   
    while(choice != 4)
    {
	printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    insert();
	    break;
	    case 2:
	    del();
	    break;
	    case 3:
	    display();
	    break;
	    case 4:
	    exit(0);
	    break;
	    default:
	    printf("=====Enter valid choice====\n");
	}
    }
getch();
}
	void insert()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d",&item);
    if(rear == maxsize-1)
    {
	printf("====OVERFLOW====\n");
	return;
    }
    if(front == -1 && rear == -1)
    {
	front = 0;
	rear = 0;
    }
    else
    {
	rear = rear+1;
    }
    queue[rear] = item;
    printf("=====Value inserted=====\n ");

}
void del()
{
    int item;
    if (front == -1 || front > rear)
    {
	printf("=====UNDERFLOW=====\n");
	return;

    }
    else
    {

	if(front == rear)
	{
	    front = -1;
	    rear = -1 ;
	}
	else
	{
	    front = front + 1;
	}
	printf("=====value deleted======\n ");
    }
}
void display()
{
    int i;
    if(rear == -1)
    {
	printf("=====Empty queue=====\n");
    }
    else
    {   printf(" Inserted values are :\n");
	for(i=front;i<=rear;i++)
	{
	    printf("\t%d",queue[i]);
	}
    }
    return 0;
}