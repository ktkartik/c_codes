//bubble sort
#include<stdio.h>
void swap(int *,int *);
void printArray(int arr[],int n);
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for (int i = 0; i < n-1; i++)
    {
       for (int j= 0; j < n-i-1; j++)
       {
         if (arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
         }
       }
       
       
    }
      printArray(arr,n);
    
    return 0;
}
 void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}