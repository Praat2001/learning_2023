#include <stdio.h>

void bigg(int x, int y){
    (x > y) ? printf("Biggest Number is %d", x) : printf("Biggest Number is %d", y);
    return;
}

int main()
{
    long long int a,b;
    
    printf("Enter two numbers \n");
    scanf("%d %d", &a,&b);
    
    bigg(a,b);

    return 0;
}
