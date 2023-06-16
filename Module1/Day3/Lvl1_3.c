#include <stdio.h>

int LargestAfterDeletion(int num) {
    int largest = 0;
    int temp = num;

    for (int i = 0; i < 4; i++) {
        int div = 1;
        for (int j = 0; j < i; j++) {
            div *= 10;
        }

        int deletedNum = (temp / (div * 10)) * div + (temp % div);
        if (deletedNum > largest) {
            largest = deletedNum;
        }
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = LargestAfterDeletion(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}
