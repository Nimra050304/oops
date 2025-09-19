#include <iostream>
using namespace std;
#define size 10

struct employee
{
    int e_id;
    float hourly_wage;
    int no_hrs;
    float total_wage;
}employee1[size];

int main()
{
    int no_of_emp,hourly_wage;
    cout<<"Input the number of employee. Should be less than "<<size<<endl;
    cin>>no_of_emp;

    cout<<"Input the hourly wage"<<endl;
    cin>>hourly_wage;

    

    for(int i=0;i<no_of_emp;i++)
    {

        cout<<"Enter the e_id";
        cin>>employee1[i].e_id;

        cout<<"Enter the no. of hours worked by the employee";
        cin>>employee1[i].no_hrs;

    }
    for(int i=0;i<no_of_emp;i++)
    {
        if(employee1[i].no_hrs<=40)
        {
            employee1[i].total_wage=hourly_wage*employee1[i].no_hrs;
        }
        else if(employee1[i].no_hrs>40)
        {
            employee1[i].total_wage=hourly_wage*40;
            employee1[i].total_wage+=hourly_wage*(1.5*(employee1[i].no_hrs-40));

        }
    }


    for(int i=0;i<no_of_emp;i++)
    {
        cout<<employee1[i].total_wage<<endl;
    }



}
