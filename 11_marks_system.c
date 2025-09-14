#include <stdio.h>
#define size 5

int main() {

    int array[size],max_marks,total=0;

    printf("what are the max marks in each sub\n");
    scanf("%d",&max_marks);

    printf("Input the marks of 5 subjects\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i =0;i<size;i++)
    {
        total+=array[i];
    }
    printf("Total marks of the student are: %d\n",total);

    float avg=total/size;
    printf("The average marks of the student are %f\n",avg);

    float perct=(total*100)/(size*max_marks);
    printf("Percentage of the student is %f\n",perct);

    //using if-else cause switch takes only integral condition
    if(perct>=90)
        printf("Your grade is O\n");
    else if (perct>=80)
        printf("Your grade is A\n");

    else if (perct>=70) //&&perct<80 is not necessary in case elif 
        printf("Your grade is B\n");
    
    else if (perct>=60)
        printf("Your grade is C\n");

    else if (perct>=50)
        printf("Your grade is D\n");
    else 
        printf("You have failed\n");

    return 0;
}
