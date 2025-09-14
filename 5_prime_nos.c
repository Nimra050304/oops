//To check whether a number is prime or not by checking the number of perfect divisors and also displaying them
#include <stdio.h>

int main() {

    int n,d,t;//user input,divisor,no. of perf divisors
    printf("Input the number to be checked");
    scanf("%d",&n);
    d=2,t=0;
    while (d<n)
    {
        if (n%d)
        {
            d++;
        }
        if (!(n%d))
        {
            printf("\nThe perfect divisor is %d",d);
            t++;
            d++;
        }
        
    }
    if (t>1)
    {
       printf("\nThe number is not prime");
    }
    else{
        printf("\nThe number is prime");
    }
    

    return 0;
}
