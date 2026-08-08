#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int first_line=0; first_line<n; first_line++)
    {
        std::cout<<'*';
    }
    std::cout<<std::endl;

    for(int i=0; i<n-2; i++)
    {
        std::cout<<'*';
        for(int space=0; space<n-2; space++)
        {
            std::cout<<' ';
        }
        std::cout<<'*';
        std::cout<<std::endl;
    }

    for(int last_line=0; last_line<n; last_line++)
    {
        std::cout<<'*';
    }
    std::cout<<std::endl;

    return 0;
}