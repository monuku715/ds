/* 4. Write a program to find the factorial of a given integer number using
stack.
NAME:- MONU KUMAR PATEL
ENROLL:- 92500527141 */

#include<stdio.h>
#define max 30
int stack [max],top=-1;
void push (int ch);
int pop();

void main()
{

    int i=1,n,fact=1;
    printf("\n Enter value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push (i);
    }
    while(top!=-1)
    {
      fact=fact*pop();
    }
    printf("\n factorial is : %d",fact);
}
void push(int value)
{
    if(top==max-1)
    {
        printf("\n stack overfiow..");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n stack is underflow..");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
