#include<stdio.h>
#include<string.h>
int main(){
    char str1[15];
    char str2[15];
    int ret;
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    ret = strncmp(str1, str2, 4);
    if (ret > 0){
        printf("str1 is greater than str2");
    }
    else if (ret <0 ){
        printf("str2 is greater than str1");
    }
    else {
        printf("Both strings are equal");
    }
    return 0;
}