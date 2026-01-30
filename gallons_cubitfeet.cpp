//program for gallon to cubic feet

#include<iostream>
int main()
{
    double gallons{};
    double cubic_foot{};

    std::cout<<"Enter Number of Gallons: ";
    std::cin>>gallons;

    cubic_foot = gallons/7.481;

    std::cout<<"Given number of Gallonss in cubic_foot is: "<<cubic_foot<<std::endl;

    return 0
}