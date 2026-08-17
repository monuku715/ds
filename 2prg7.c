/* 7. Write a program to find the Smallest Common Divisor of a given
number.
NAME:- MONU KUMAR PATEL
ENROLL:- 92500527141 */

#include<stdio.h>
#define max 100
int stack[max],top=-1;
void push(int value);
int pop();
void main()
{
    int num,i,div;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
         push(i);
        }
    }
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            div=pop();
        }
    }
    printf("The smallest common division is : %d",div);
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

