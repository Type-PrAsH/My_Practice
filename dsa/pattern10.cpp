#include<iostream>
int main()
{
    int n{};
    std::cin>>n;

    for(int i=0; i<n-1; i++)
    {
        for(int pattern=0; pattern<i+1; pattern++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
    for(int pattern=0; pattern<n; pattern++)
    {
        std::cout<<'*';
    }
    std::cout<<'\n';
    for(int i=0; i<n-1; i++)
    {
        for(int pattern=0; pattern<n-i-1; pattern++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
}