#include <stdio.h>
#define size 10

int main() {

//separates the digits first
    int num,array[size],no_digit,display_num;
    printf("Enter the number to be reversed. Max digits is %d\n",size);
    scanf("%d",&num);

    printf("How many digits does the number have\n");
    scanf("%d",&no_digit);
    //display_num was required for printing the number fort he user to double check
    display_num=num;


    for(int i=0;i<no_digit;i++)
    {
        if(num)
        {
            array[i]=num%10;
            num/=10;
        }
    }

//calculates sum
    int sum=0;
    for(int i=0;i<no_digit;i++)
    {
        sum+=array[i];
    }

    printf("The sum of digits of %d is %d\n",display_num, sum);

    return 0;
}
