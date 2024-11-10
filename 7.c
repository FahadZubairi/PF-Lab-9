#include<stdio.h>
#include<string.h>
int main(){
    char destination[20];
    char source[20];
    int n;
    puts("Enter destination:");
    fgets(destination,20,stdin);
     puts("Enter source :");
    fgets(source,20,stdin);
    printf("Enter n :");
    scanf("%d",&n);
    strncat(destination,source,n );
    printf("The concatenated string is : %s\n", destination);
    return 0;
}