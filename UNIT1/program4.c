*/create array A,B and C of size 3,C of size 6,merge A and B into C.
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141*/

#include<stdio.h>
  int main(){
    int A[3],B[3],C[6];

    
    for(int i=0;i<3;i++){
    printf("enter the element of array A %d :",i+1);
    scanf(" %d",&A[i]);
    }

    for(int i=0;i<3;i++){
    printf("enter the element of array B %d :",i+1);
    scanf(" %d",&B[i]);
    }

    
    for(int i=0;i<3;i++){
      C[i]= A[i];
    }

    for(int i=0;i<3;i++){
      C[i+3]= B[i];
    }

    printf("array of c:");
    for(int i=0;i<6;i++){
        printf(" %d",C[i]);
    }

  }