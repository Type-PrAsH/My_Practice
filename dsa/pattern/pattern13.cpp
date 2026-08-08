#include<iostream>
int main()
{
    int n{};
    std::cin>>n;
    
    int pattern{0};

    for(int i=0; i<n; i++)
    {
        int count{1+i+pattern};
        for(pattern; pattern<count; pattern++)
        {
            std::cout<<pattern+1;
        }
        std::cout<<'\n';
    }
}