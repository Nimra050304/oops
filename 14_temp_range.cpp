#include <iostream>
using namespace std;
#define size 20

int main()
{

    int array[size],actual_size;
    float average=0;
    int high=0, pleasant=0, cold=0;

    cout<<"How many elements do you have to add? Max is "<<size<<endl;
    cin>>actual_size;

    cout<<"Enter the temperature of a day"<<endl;
    for(int i=0;i<actual_size;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<actual_size;i++)
    {
        if(array[i]>85)
        {
            high++;
            cout<<i+1<<"th day was a hot day with a temperature of "<<array[i]<<endl;
        }

        else if(array[i]>=60&&array[i<=84])
        {
            pleasant++;
            cout<<i+1<<"th day was a pleasant temperature day with a temperature of "<<array[i]<<endl;
        }

        else if(array[i]<60)
        {
            cold++;
            cout<<i+1<<"th day was a cold day with a temperature of "<<array[i]<<endl;
        }

        average+=array[i];
        

    }
    average/=actual_size;

    cout<<"The average temperature during the following set of days was "<<average<<endl;



    return 0;
}
