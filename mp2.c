// //Create a C program that swaps the values of two integers using a user-defined function,
// swapIntegers. The user inputs two integer values, and the program uses the function to swap
// them. It should perform the swap and display the updated values.
#include<stdio.h>
void swap( int* x ,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d\n %d",&a,&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);

}