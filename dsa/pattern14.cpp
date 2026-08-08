#include<iostream>
int main()
{
    int n{};
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int pattern=65; pattern<65+i+1; pattern++)
        {
            std::cout<< static_cast<char>(pattern);
        }
        std::cout<<"\n";
    }

    return 0;
}