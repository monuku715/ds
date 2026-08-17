/* . Write a program to find out the factorial of a number using recursion
(stack).
NAME:- MONU KUMAR PATEL
ENROLL:- 92500527141 */

#include<stdio.h>
int factorial(int n);
void main()
{
    int n,z;
    printf("\n enter value : ");
    scanf("%d",&n);
    z=factorial(n);
    printf("\n factorial id : %d",z);
}
int factorial(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*factorial(n-1);
    return f;
}
