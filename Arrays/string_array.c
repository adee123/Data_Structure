#include <stdio.h>
#include <string.h>

void string_function(char *ptr);

int main() {
    char str[5];
    printf("Enter a atring\n");
    gets(str);
    printf("The string is %s\n", str);
    string_function(str);
    return 0;
}

void string_function(char *ptr) {
    int length = strlen(ptr);
    char str[5];
    printf("The length of string is %d\n", length);
    strcpy(str, ptr);
    printf("Copying the string in str gives %s\n", str);
}