#include <iostream>
using namespace std;

int fac_till_k(int n, int k)
{
    int fac=1;
    for(int i=n;i>(n-k);i--)
    {
        fac*=i;
    }
    return fac;
}

int main()
{

    int guests,chairs;

    cout<<"How many guests are there?"<<endl;
    cin>>guests;

    cout<<"How many chairs are present"<<endl;
    cin>>chairs;
    //simply calculate factorial of n till k
    if(chairs<guests)

    {
        int fac_k=fac_till_k(guests, chairs);
        cout<<"Number of possible combinations is/are"<<fac_k<<endl;
    }
    
    else 
        cout<<"All the guests can be seated"<<endl;
    return 0;
}
