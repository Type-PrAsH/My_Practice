#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int before=0; before<i+1; before++)
        {
            std::cout<<before+1;
        }
        for(int space=(n-1)*2; space>i*2; space--)
        {
            std::cout<<'.';
        }
        for(int after=i+1; after>0; after--)
        {
            std::cout<<after;
        }
        std::cout<<'\n';
    }
}