#include <stdio.h>

int character_type(char ch) {
    int type;
    
    if (ch >= 'A' && ch <= 'Z') {
        type = 1;
    } else if (ch >= 'a' && ch <= 'z') {
        type = 2;
    } else if (ch >= '0' && ch <= '9') {
        type = 3;
    } else if (ch >= 32 && ch <= 126) {
        type = 4;
    } else {
        type = 5;
    }
    
    return type;
}

int main() {
    char cha;
    printf("Enter a character: ");
    scanf("%c", &cha);
    
    int type = character_type(cha);
    
    switch (type) {
        case 1:
            printf("Character type is Uppercase letter\n");
            break;
        case 2:
            printf("Character type is Lowercase letter\n");
            break;
        case 3:
            printf("Character type is Digit\n");
            break;
        case 4:
            printf("Character type is Printable symbol\n");
            break;
        case 5:
            printf("Character type is Non-printable symbol\n");
            break;
        default:
            printf("Invalid character type!\n");
            break;
    }
    
    return 0;
}
