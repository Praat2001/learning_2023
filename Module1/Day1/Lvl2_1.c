#include <stdio.h>

int greatest_num(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }

    return 0;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatest = greatest_num(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);
    return 0;
}




