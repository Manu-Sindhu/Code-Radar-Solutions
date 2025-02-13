#include <stdio.h>

int main() {
    char ch;


    scanf("%c", &ch);

    // Checking if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } 
    // Checking if the character is an alphabet
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Checking if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } 
    // If neither digit nor alphabet, it is a special character
    else {
        printf("Special Character");
    }

    return 0;
}
