//temperature conversion (celsius and farhenheit)

#include<iostream>
int main()
{
    int input{};
    double far{}, cel{};

    std::cout<<"Type 1 to convert Fahrenheit to Celsius,"
             <<"     2 to convert Celsius to Fahrenheit: ";
    std::cin>>input;

    if(input == 1)
    {
        std::cout<<"Enter Temperature in Fahrenheit: ";
        std::cin>>far;

        std::cout<<"Temperature in Celsius is: "<<(far-32)*5.0/9.0;

        return 0;
    }

    else if(input == 2)
    {
        std::cout<<"Enter Temperature in Celsius: ";
        std::cin>>cel;

        std::cout<<"Temperature in Fahrenhrit is: "<<((9.0/5.0) * cel) + 32;
    }

    return 0;
}