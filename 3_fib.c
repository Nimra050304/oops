#include <stdio.h>

void fib(int n)
{
    int a=0,b=1,c=0;

    for (int i=0;i<n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}

int main() {

    
    int num;
    printf("Input the number of terms in the fib series :  \n");
    scanf("%d",&num);
    fib(num);

    return 0;
}
