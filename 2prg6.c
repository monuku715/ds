/*6. Write a program to find GCD of two numbers.
NAME:-monu KUMAR patel
ENROLL:-92500527141*/


#include<stdio.h>
#define max 100

int stack[max],top=-1;

void push(int value);
int pop();

int main()
{
    int num1,num2,a, b, temp;

    printf("Enter a number 1: ");
    scanf("%d",&num1);

    printf("Enter a number 2: ");
    scanf("%d",&num2);


    push(num1);
    push(num2);

    b=pop();
    a=pop();

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("\n GCD of number is : %d",a);
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
