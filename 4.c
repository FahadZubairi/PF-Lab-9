#include<stdio.h>
int Evenorodd(int a){
    int c;
    if (a%2==0){
        c = 1;
    }else c= 0;
    return c;
}
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",num);
    if (Evenorodd(num) == 1) printf("The number is even");
    else printf("The number is odd");
    return 0;
}