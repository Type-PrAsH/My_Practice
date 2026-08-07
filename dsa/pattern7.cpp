#include<iostream>
int main()
{
    int n{};
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int before=0; before<n-i-1; before++)
        {
            std::cout<<' ';
        }
        for(int pattern=0; pattern< ((2*i)+1); pattern++)
        {
            std::cout<<'x';
        }
        for(int after=0; after<n-i-1; after++)
        {
            std::cout<<' ';
        }
        std::cout<<std::endl;
    }

    return 0;
}