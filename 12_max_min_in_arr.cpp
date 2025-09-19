#include <iostream>
#define size 15
using namespace std;

int main()

{
    int array[size],actual_size;

    cout<<"How many elements do you have to add";
    cin>>actual_size;


    cout<<"Enter the elements of the array"<<endl;

    for(int i=0;i<actual_size;i++)
    {
        cin>>array[i];
        cout<<i+1<<" number/s is/are scanned"<<endl;

    }

    int max=0,min=array[0],average=0;

    for(int i=0;i<actual_size;i++)
    {
        if(array[i]>max)
            max=array[i];
        else if(array[i]<min)
            min=array[i];
        average+=array[i];
        
        
    }

    cout<<"The maximum number in the array is "<<max<<endl;
    cout<<"The minimum number in the array is "<<min<<endl;
    cout<<"The average of the array is "<<average/actual_size<<endl;
}
