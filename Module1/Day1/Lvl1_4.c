#include<stdio.h>

int main(){
    int operand1,operand2,res;
    char operator;
    printf("----------CALCUATOR----------\n");
    printf("Enter Number 1 :- ");
    scanf("\n%d", &operand1);
    printf("Enter the Operator :- ");
    scanf("\n %c", &operator);
    printf("Enter the Operand 2 :- ");
    scanf("\n%d", &operand2);
    
    
    switch(operator)
    {
        case '+': res=operand1+operand2;
        printf("\n The sum is %d\n",res);
        break;
        
        case '-': res=operand1-operand2;
        printf("\n The difference is %d\n",res);
        break;
        
        case '*': res=operand1*operand2;
        printf("\n The product is %d\n",res);
        break;
        
        case '/': res=operand1/operand2;
        printf("\n The quotient is %d\n",res);
        break;
        
        default: printf ("\n Invalid entry");
    }
    
    return 0;
}