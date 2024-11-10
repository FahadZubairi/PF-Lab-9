#include<stdio.h>
int SumArray(int arr[],int size);
int main(){
    int arr[] = {1,2,3,4,5};
    printf("The sum of Array is :%d\n", SumArray(arr,5));
    return 0;
}
int SumArray(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
        
    }
    return sum;
}