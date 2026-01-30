//celsius to fahrenheit

#include<iostream>
int main()
{
    double celsius;

    std::cout<<"Enter temperature in Celsius: ";
    std::cin>>celsius;

    std::cout<<"Given Temperature in Farhenheit is: "<< (celsius * (9.0/5.0)) + 32<<std::endl;
}