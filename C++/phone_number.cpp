#include<iostream>
int main()
{
    struct phone
    {
        int area{}, exchange{}, number{};
    };

    char dummy;

    phone phone1{212, 767, 8900}, phone2{};

    std::cout<<"\nEnter your area code, exchange, and number: ";
    std::cin>>phone2.area>>phone2.exchange>>phone2.number;

    std::cout<<"\n"<<"My Number is: "<<"("<<phone1.area<<")"<<" "<<phone1.exchange<<"-"<<phone1.number;
    std::cout<<"\n"<<"Your Number is: "<<"("<<phone2.area<<")"<<" "<<phone2.exchange<<"-"<<phone2.number<<"\n";

    return 0;
}