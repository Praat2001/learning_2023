/**Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure. **/


#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex *num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imag));
}

void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    // Read complex numbers
    printf("Reading Complex Number 1\n");
    readComplex(&num1);
    printf("\nReading Complex Number 2\n");
    readComplex(&num2);

    // Write complex numbers
    printf("\nComplex Number 1\n");
    writeComplex(num1);
    printf("\nComplex Number 2\n");
    writeComplex(num2);

    // Addition of complex numbers
    sum = addComplex(num1, num2);
    printf("\nSum of the Complex Numbers\n");
    writeComplex(sum);

    // Multiplication of complex numbers
    product = multiplyComplex(num1, num2);
    printf("\nProduct of the Complex Numbers\n");
    writeComplex(product);

    return 0;
}