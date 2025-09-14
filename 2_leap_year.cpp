#include <iostream>

int main() {

    int x;
    std::cout<<"Enter the year to be checked:\n";
    std::cin>>x;

    if(!(x%400))
    {
        std::cout<<x<<" "<<"is a leap year";
    }

    else if((x%100)&&!(x%4))
    {
        std::cout<<x<<" "<<"is a leap year";
    }

    else 
    {
        std::cout<<x<<" "<<"is not a leap year";
    }

    return 0;
}
