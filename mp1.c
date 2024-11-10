// //Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
// characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
// Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
// For example: "madam", "racecar", "level", "radar".
#include<stdio.h>
#include<string.h>
int Is_palindrome(char arr[]){
    int length = 0;
    int i = 0;
    while(arr[i]!='\0'){
        length++;
        i++;
    }
     
    
    for (int i = 0;i<length/2;i++){
        if (arr[i]!= arr[length - i - 1]){
            return 0;
        }
      
    }
    return 1;}
int main(){
    char word[5][20];
    printf("Enter 5 words: ");
    for (int i =0; i<5;i++){
        fgets(word[i],20,stdin);
        word[i][strcspn(word[i], "\n")] = '\0';
        int result = Is_palindrome(word[i]);
        if (result == 1){
            printf("Inputted word %s is a palindrome\n",word[i]);
        }
        else {
            printf("Inputted word %s is not a palindrome\n",word[i]);
        }

    }

}