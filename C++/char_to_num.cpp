#include<iostream>
int main()
{
    char let{};
    long number{};

    std::cout<<"Enter a number: ";

    while(true)
    {
        let=std::cin.get();
        if(let == '\n')
        {
            break;
        }

        if(let >= '0' && let<= '9')
        {
            number = (number * 10) + (static_cast<int>(let) - 48);
        }

    }

    std::cout<<"Number is: "<<number<<"\n\n\n";

    return 0;
}