#include<iostream>
int main()
{
    double amount{}, year{}, interest_amount{};
    double rate{}, final{};

    std::cout<<"\n\nEnter Initial Amount: ";
    std::cin>>amount;

    std::cout<<"Enter Number Of Years: ";
    std::cin>>year;

    std::cout<<"Enter Interest Rate(Percent per year): ";
    std::cin>>rate;

    for(int i=0; i<year; i++)
    {
        interest_amount = amount * rate/100.0;

        amount = amount + interest_amount;
    }

    std::cout<<amount<<"\n\n";

    return 0;
}