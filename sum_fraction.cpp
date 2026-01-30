//sum of fractions

#include<iostream>
int main()
{
    int a{}, b{}, c{}, d{};
    char dummy;

    std::cout<<"Enter 1st Fraction: ";
    std::cin>>a>>dummy>>b;

    std::cout<<"Enter 2nd Fraction: ";
    std::cin>>c>>dummy>>d;

    std::cout<<"The Sum is = "<<((a*d)+(b*c))<<'/'<<(b*d)<<"\n";

    return 0;
}