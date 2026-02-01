//simple calculator =,-,*,/

#include<iostream>
int main()
{
    double first{}, second{};
    char ope{}, check{};

    do
    {
        std::cout<<"Enter first number, operator, second number: ";
        std::cin>>first>>ope>>second;

        switch(ope)
        {
            case '+': std::cout<<"Answer = "<< first + second; break;
            case '*': std::cout<<"Answer = "<< first * second; break;
            case '/': std::cout<<"Answer = "<< first / second; break;
            case '-': std::cout<<"Answer = "<< first - second; break;
            default: std::cout<<"Invalid Operator"; break;
        }
        
        std::cout<<"\n\nDo Another?(y/n): ";
        std::cin>>check;
    } while(check == 'y');

    return 0;
}