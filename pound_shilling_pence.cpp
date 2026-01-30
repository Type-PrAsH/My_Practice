//pound shilling pence to decimal pound

#include<iostream>
int main()
{
    double pound{}, shilling{}, old_pence{};

    std::cout<<"Enter Pounds: ";
    std::cin>>pound;
    std::cout<<"Enter Shilling: ";
    std::cin>>shilling;
    std::cout<<"Enter Pence: ";
    std::cin>>old_pence;

    old_pence += shilling * 12;



    std::cout<<"Decimal pounds = "<<u8"\u00A3"<< pound + (((5.0/12.0) * old_pence))/100<<"\n";

    return 0;
}