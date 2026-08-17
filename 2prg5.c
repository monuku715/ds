/*5. Write a program to find the power of a given number using stack.
NAME:-monu KUMAR patel
ENROLL:-92500527141*/

#include<stdio.h>
#define max 100

int stack[max],top=-1;

void push(int value);
int pop();

void main()
{
    int base,power,i;
    int result=1;

    printf("enter a base number :");
    scanf("%d",&base);

    printf("enter a power number :");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        push(base);
    }

    while(top !=-1)
    {
        result=result * pop();
    }

    printf("\n power of %d ^ %d=%d",base,power,result);
}
void push(int value)
{
    if(top==max-1)
    {
        printf("\n stack overflow..");
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
