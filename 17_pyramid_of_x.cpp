#include <iostream>
using namespace std;

void prnt_even(int lines)
{
    for(int i=0;i<=lines;i++)
    {
        for(int j=0;j<=(2*i);j++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
}

void prnt_odd(int lines)
{
        for(int i=0;i<=lines;i++)
    {
        for(int j=0;j<=(2*i);j++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
}
int main()
{

    int lines;
    cout<<"How many lines should the pyramid have? Should be greater than 0"<<endl;
    
    cin>>lines;


    


    return 0;

}
