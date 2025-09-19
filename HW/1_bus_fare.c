#include <stdio.h>

int main() {

    
    float distance;
    printf("Input the distance \n");
    scanf("%f",&distance);
    
    int age;
    printf("Input age \n");
    scanf("%d",&age);

    int base_fare=10;
    float fare=distance*base_fare;

    if(age<12)
    {
        fare*=0.5;
    }

    else if (age>=60)
        fare*=0.3;

    printf("The fare for the person is %.2f\n",fare);
    
    

    return 0;
}
