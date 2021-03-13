#include<stdio.h>
#include<conio.h>
int top=-1;
void push(int[],int);
void display(int[]);
void main()
{
int i,ch,ele,item,stk[100],s;
clrscr();

do
{
printf("\n1. Push\n2. Pop\n3. Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the size of array	:	");
	scanf("%d",&s);
	printf("Enter the elements	:	 ");
	for(i=0;i<s;i++)
	{
	scanf("%d",&item);
	push(stk,item);
	}
	break;
}
case 2:
{
	printf("\nThe element in the stack are: ");
	display(stk);
	break;
}
	}
	}
	while(ch!=3);
	getch();
}
void push(int stk[],int item)
{
	     
	if(top==100)
		{
		printf("\nOverflow");
		exit();
		}
	else
		{
		top++;
		stk[top]=item;
		}
}

void display(int stk[])
{
	int i;
	for( i=top;i>=0;i--)
	printf("%d\t",stk[i]);
}



