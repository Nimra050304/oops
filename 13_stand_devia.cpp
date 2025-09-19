#include <iostream>
#include <math.h>
using namespace std;
#define size 20

int sum_squares(int *array,int actual_size)
{
    int sum_sq=0;
    for(int i=0;i<actual_size;i++)
    {
        sum_sq+=array[i]*array[i];
    }
    return sum_sq;
}

int main()
{

    int array[size],actual_size,average=0,max;

    cout<<"How many elements do you have to add"<<endl;
    cin>>actual_size;

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<actual_size;i++)
    {
        cin>>array[i];
        cout<<i+1<<" number/s is/are scanned"<<endl;
    }
    int min=array[0];

    for(int i=0;i<actual_size;i++)
    {

        if(array[i]>max)
            max=array[i];
        else if(array[i]<min)
            min=array[i];
        average+=array[i];
      
    }
    average/=actual_size;

    //declaring it as float as sum of square/actual size needs to be a float
    float sum_of_squares=sum_squares(array,actual_size);

    float stand_dev= sqrt((sum_of_squares/actual_size)-(average*average));


    cout<<"The standard deviation of the input data set is "<<stand_dev<<endl;
    cout<<"The lower edge of the range of the given data set is "<<min<<" and the upper edge is "<<max<<endl;




    return 0;
}
