/**Use structures to find the volume and the total surface area of the box. 
You need to access the members of the structure with the help of a structure pointer:
 a. With the help of (*) asterisk or indirection operator and (.) dot operator.
 b. With the help of ( -> ) Arrow operator using pointer as well as dot representation. **/

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    // Input box dimensions
    printf("Enter the length of the box: ");
    scanf("%f", &(boxPtr->length));
    printf("Enter the width of the box: ");
    scanf("%f", &(boxPtr->width));
    printf("Enter the height of the box: ");
    scanf("%f", &(boxPtr->height));

    // Calculate volume and surface area
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    // Output results
    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}