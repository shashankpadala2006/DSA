#include<stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[],int size,int index){
  
    for(int i = index; i < size-1; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[100]={7,10,26,78,89};
    int size = 5,element = 45,index = 1;
    display(arr,size);
    indDeletion(arr,size,index);
    size -=1;
    display(arr,size);

    return 0;
}