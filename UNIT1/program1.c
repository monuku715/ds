//create an array of size 10,input values and print the array,and search an element in the array.
name:-monu kumar patel
enroll:-92500527141//

#include <stdio.h>

int main(){

   int arr[10];
   int search,found=0;

   printf("enter your 10 input element of array:\n");
   for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
   }
    
   printf("your array element are:\n");
   for(int i=0;i<10;i++){
     printf(" %d",arr[i]);
   }

   printf("\nenter the element to search:\n");
   scanf("%d",&search);
   for(int i=0;i<10;i++){
    if(arr[i]==search){
        printf("your element %d found at index %d \n",search,i,i+1);
        found = 1;
        break;
    }
   }

   if(found==0){
    printf("element %d not found in the array.",search);
   }
   return 0;
}