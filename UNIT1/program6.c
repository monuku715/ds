*/Insert an element into the array at user defined position?
NAME:-MONU KUMAR PATEL
ENROLL:-92500527141*/
#include <stdio.h>
int main(){
    int arr[20];
    int n,i,element,pos;

    printf("enter the number of element:");
    scanf(" %d",&n);

    printf("enter %d element:\n",n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }



    printf("enter the element to insert:");
    scanf("%d",&element);

    printf("enter the position:",n+1);
    scanf("%d",&pos);

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos-1]=element;
    n++;

    printf("array after insertion:");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}