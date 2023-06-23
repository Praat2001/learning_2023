/** Write a program to demonstrate the swapping the fields of two structures using pointers **/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapFields(struct Student *s1, struct Student *s2) {
    // Swap name field
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap age field
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;

    // Swap marks field
    float tempMarks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = tempMarks;
}

void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1 = {"John", 20, 85.5};
    struct Student student2 = {"Alice", 22, 90.0};

    printf("Before swapping:\n");
    printf("Student 1:\n");
    displayStudent(student1);
    printf("\nStudent 2:\n");
    displayStudent(student2);

    // Swap fields using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    displayStudent(student1);
    printf("\nStudent 2:\n");
    displayStudent(student2);

    return 0;
}

