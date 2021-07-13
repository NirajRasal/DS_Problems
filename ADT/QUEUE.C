#include<stdio.h>
#include<conio.h>
#define max 50
int queue_array[max];
int rear=-1;
int front=-1;
void main()
{
int choice,data;
while(1)
{
printf("\n1.insert \n2.delet \n3.display \n4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
printf("end of program");
exit(0);
break;
}
}
}
insert()
{
int add_item;
if(rear==max-1)
{
printf("queue if full");
}
else
{
if(front==-1)
front=0;
printf("\ninsert the element in queue:");
scanf("\n%d",&add_item);
rear=rear+1;
queue_array[rear]=add_item;
}
}
delete()
{
int d;
if(front==-1 || front>rear)
{
printf("queue is empty");
return;
}
else
{
printf("\ndeleteed element is %d",queue_array[front]);
front=front+1;
}
}
display()
{
int i;
for(i=front;i<=rear;i=i+1)
{
printf("\n%d",queue_array[i]);
}
}