#include <stdio.h>
#define size 10

int main() {

    int num,array[size],no_digit;
    printf("Enter the number to be reversed. Max digits is %d",size);
    scanf("%d",&num);

    printf("How many digits does the number have");
    scanf("%d",&no_digit);


    for(int i=0;i<no_digit;i++)
    {
        if(num)
        {
            array[i]=num%10;
            num/=10;
            
        }
    }

    printf("Number in reverse is: ");
    for(int i=0;i<no_digit;i++)
    {
        printf("%d",array[i]);
    }


    return 0;
}
