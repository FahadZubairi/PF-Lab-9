#include<stdio.h>
int product(int a , int b){
    return a*b;
}
int main(){
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);
    int prod = product(num1,num2);
    printf("\nThe product is %d",prod);
    return 0;
}