#include<iostream>
#include<math.h>
int main()
{
    int n{};
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int pattern_before=0; pattern_before<n-i; pattern_before++)
        {
            std::cout<<'*';
        }
        for(int space=0; space<2*i; space++)
        {
            std::cout<<' ';
        }
        for(int pattern_before=0; pattern_before<n-i; pattern_before++)
        {
            std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int pattern_before=0; pattern_before<i+1; pattern_before++)
        {
            std::cout<<'*';
        }
        for(int space=0; space<(((n*2)-2)-(i*2)); space++)
        {
            std::cout<<' ';
        }
        for(int pattern_before=0; pattern_before<i+1; pattern_before++)
        {
            std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    
    return 0;
}