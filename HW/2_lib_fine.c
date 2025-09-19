//improvement to be made based on date
#include <stdio.h>

int main() {

    
    int days_late;
    printf("Input the number of days late \n");
    scanf("%d",&days_late);

    int fine=0;
    if(days_late>1&&days_late<=5)
        fine=fine+(2*days_late);
    
    else if(days_late>5&&days_late<=10)
        fine=fine+(3*days_late);
    else if(days_late>10)
        fine=fine+(5*days_late);
    printf("Fine is %d\n",fine);
    

    return 0;
}
