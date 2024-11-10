#include<stdio.h>
int max(int a, int b){
    if (a>b)
    return a;
    else 
    return b;
}
int main(){
    int result = max(8,25);
    printf("The maximum number is: %d",result);
    return 0;
}