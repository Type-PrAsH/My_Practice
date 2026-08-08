#include<iostream>
int main()
{
    int n{};
    std::cin>>n;


    for(int i=0; i<n; i++)
    {
        for(int pattern=65+n-i-1;pattern<65+n; pattern++)
        {
            std::cout<<static_cast<char>(pattern);
        }
        std::cout<<std::endl;
    }

    return 0;
}