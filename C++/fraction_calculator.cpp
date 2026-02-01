//program for simple fraction calaculator

#include<iostream>
int main()
{
    int a{}, b{}, c{}, d{};

    char op{}, dummy{};

    do
    {
        std::cout<<"\n\nEnter First Fraction, Operator, Second Fraction: ";
        std::cin>>a>>dummy>>b>>op>>c>>dummy>>d;
        std::cout<<"\n";


        switch(op)
        {
            case '+': std::cout<<((a*d) + (c*b))<<"/"<<b*d<<"\n"; break;
            case '-': std::cout<<((a*d) - (c*b))<<"/"<<b*d<<"\n"; break;
            case '*': std::cout<<(a*c)<<"/"<<(b*d)<<"\n"; break;
            case '/': std::cout<<(a*d)<<"/"<<(b*c)<<"\n"; break;
            default: std::cout<<"Enter Correct Operator!";
        }

        std::cout<<"\nDo You Want To Continue(y/n): ";
        std::cin>>dummy;
    } while(dummy=='y');

    return 0;
}