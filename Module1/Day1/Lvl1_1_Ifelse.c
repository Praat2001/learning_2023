#include <stdio.h>

void bigg(int x, int y){
    if(x>y){
        printf("Biggest number is %d", x);
    }else{
        printf("Biggest number is %d", y);
    }
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
