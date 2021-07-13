#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
int ch,x,n,p;
int arr[max],i,cnt=0;
clrscr();
printf("how many nodes do you want in array");
scanf("%d",&n);
printf("enter %d nodes",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("1-insert\n 2-delete\n 3-search\n 4-display\n");
printf("enter ypur choice");
scanf("%d",&ch);
if(ch==1)
{
printf("enter number and position to insert in array");
scanf("%d%d",&x,&p);
for(i=n-1;i>p-1;i--)
{
arr[i+1]=arr[i];
}
arr[i+1]=x;
n++;
}
{
printf("new array is %d",arr[i]);
}//insert end//
else if(ch==2)
{
printf("enter element u want to delete from array");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(arr[i]==x)
{
break;
}
}
for(i=0;i<n;i++)
{
arr[i]=arr[i+1];
}
for(i=0;i<n;i++)
{
printf("new array is %d",arr[i]);
}
}
else if(ch==3)
{
printf("\n enter the number to search from array");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(arr[i]==x)
{
break;
}
}
if(i<n)
{
printf("%d element found at %d position in array",x,(i+1));
}
else
{
for(i=0;i<n;i++)
{
printf("%5d",arr[i]);
{
printf("do you want to conyinue press 1");
}
}
}
}
getch();
}