#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int before=0; before<i; before++)
        {
            std::cout<<' ';
        }
        for(int pattern=0; pattern<((2*(n-i)-1)); pattern++)
        {
            std::cout<<'*';
        }
        std::cout<<std::endl;
    }
    return 0;
}