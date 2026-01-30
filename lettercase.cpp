//if lower case then 0, if upper case then 1

#include<iostream>
#include<ctype.h>
int main()
{
    char letter;

    std::cout<<"Enter a character to check if lower or upper case:\n";
    std::cin>>letter;

    std::cout<<islower(letter)<<'\n';

    return 0;
}