#include <stdio.h>
#define size 10

int main() {

    int array[size],target;

    printf("How many elements do you want to enter in the array\n");
    scanf("%d",&target);

    printf("Enter the elements of the array");
    for(int i=0;i<target;i++)
    {
        scanf("%d",&array[i]);
    }

    int max=0;
    for(int i=0;i<target;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }

    printf("Max element in the array is %d",max);

    return 0;
}
