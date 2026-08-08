#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int pattern=0; pattern<i+1; pattern++)
        {
            if((pattern+i)%2 == 0)
            {
                std::cout<<'1';
            }
            else
            {
                std::cout<<'0';            }
        }
        std::cout<<'\n';
    }
}