#include <stdio.h>
//factorial only upto a certain value (not till 1)
int fac_two(int n,int k){
    int output,t;
    output=n;
    for (t = 1; t<k; t++)
{
    output=output*(n-t);
}
    return output;
}

int main() {
    
    int num1;
    printf("Input the value of number \n");
    scanf("%d",&num1);
    
    int num2;
    printf("Input the digits to be included in the fac \n");
    scanf("%d",&num2);
    
    
    printf("%d",fac_two(num1,num2));

    return 0;
}
