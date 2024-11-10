//1. Write a program that initializes a 2D character array with a list of words. Then, take a 
// word as input from the user and check if it exists in the array. Display "Found" if it’s there, otherwise display "Not Found".
#include<stdio.h>
#include<string.h>
int main(){
    char arr[][30]= {"car","house","killer","sunshine","history"};
    char word[30];
    int found = 0;
    printf("Enter a word :");
    fgets(word,30,stdin);
    word[strcspn(word, "\n")] = '\0';
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<length;i++){
        
        if (strcmp(arr[i],word)==0){
            printf("Found\n");
            found = 1;
            break;
        }
    }
    if (!found){
        printf("Not found\n");        
    }
    return 0;
}