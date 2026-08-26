*/create arrays A,B, and C of size 3, perform C = A + B?
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141*/

#include <stdio.h>

int main(){

    int A[3],B[3],C[3];
    int i;
    
    for( i=0;i<3;i++){
    printf("Enter the element of array A at index %d :",i+1);    
    scanf("%d",&A[i]);
    }

     for( i=0;i<3;i++){
    printf("Enter the element of array B at index %d :",i+1);    
    scanf("%d",&B[i]);
    }

    printf("your enterd element of array A are:\n");
    for( i=0;i<3;i++){
    printf(" %d",A[i]);
    }

    printf("your entered element of array B are:\n");
    for(i=0;i<3;i++){
    printf("  %d",B[i]);
    }

    printf("array of c:\n");
    for( i=0;i<3;i++){
      C[i] = A[i] + B[i];
      printf(" %d ",C[i]);
    }


}