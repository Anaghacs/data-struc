#include<stdio.h>
#define MAXSIZE 5
struct stack
{
int stk[MAXSIZE];
int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void display(void);
void main()
{
	int choice;
	int option=1;
	s.top=-1
	printf("STACK OPERATION\n");
	while(option)
	{
		printf("------------------------\n");
		printf("    1  -->  PUSH       \n");
		printf("    2  -->  POP       \n");
		printf("    3  -->  DISPLAY       \n");
		printf("    4  -->  EXIT       \n");
		printf("------------------------\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return;
		}
		fflush(stdin);
		printf("Do you want to continue(0 or 1)?\n");
		scanf("%d",&option);
	}
}
void push()
{
	int num;
	if(s.top==(MAXSIZE - 1))
	{
		print("STACK IS fULL\n");
		return;
	}
	else
	{
		printf("Enter the elements to be pushed\n");
		scanf("%d",&num);
		s.top=s.top + 1;
		s.stk[s.top]=num;
	}
	return;
}
void pop()
{
	int num;
	if(s.top== -1))
	{
		print("STACK IS fULL\n");
		return(s.top);
	}
	else
	{
		num=s.stk[s.top];
		printf("poped element is =%d\n",s.stk[s.top]);
		s.top=s.top - 1;
	}
	return(num);
}
void display()
{
	int i;
	if(s.top== -1))
	{
		print("STACK IS fULL\n");
		return(s.top);
	}
	else
	{		
		printf("\n The status of the stack is\n");
		for(i=s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]);
		}
	}
	printf("\n");
}		
