*/create an array of size 10,input values and display sum and average of all element in the array.
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141*/
#include <stdio.h>

int main(){

     int arr[10];
     int sum =0;
     float average;

     for(int i=0;i<10;i++){
        printf("enter your array element at index %d:",i+1);
        scanf(" %d",&arr[i]);
        sum = sum + arr[i];

     }

     printf("your entered element are:");
     for(int i=0;i<10;i++){
      printf(" %d",arr[i]);
     }

     average=sum/10;

     printf("\nsum of all the element of the array are: %d",sum);
     printf("\nyour average of array element are: %.2f",average);
       
    
     return 0;
}