// include check for division by zero

#include <stdio.h>

int main() {

    
    int input1,input2;
    printf("Input the value of first number \n");
    scanf("%d",&input1);

    char operator;
    printf("Enter the operator. Enter 't' or 'T' for termination\n");
    scanf(" %c",&operator);

    float ans=input1;

    
    do
    {

        printf("Input the value of second input\n");
        scanf("%d",&input2);
        
        switch(operator)
        {
            case '+':
                ans+=input2;
                break;
            case '-':
                ans-=input2;
                break;
            case '*':
                ans*=input2;
                break;
            case'/':
                ans/=input2;
                break;
            default:
                printf("Invalid operator. Try again");
                break;

        }

        printf("Enter the operator. Enter 't' or 'T' for termination\n");
        scanf(" %c",&operator);

    }while(operator!='t'&&operator!='T');

    printf("The final answer is %f",ans);

    return 0;
}
