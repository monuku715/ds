*/Create an array of size 10 ,find the largest value from the array.
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141*/

#include <stdio.h>
int main(){
    int arr[10];
    int largest;

    for(int i=0;i<10;i++){
        printf("enter the elment of array at index %d :",i+1);
        scanf(" %d",&arr[i]);
    }

    largest = arr[0];

    for(int i=0;i<10;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    printf("largest element is: %d ",largest);

}