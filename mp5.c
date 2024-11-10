#include <stdio.h>
#include <string.h>

char* reverse(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    return s;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: %s\n", reverse(str));
    return 0;
}
