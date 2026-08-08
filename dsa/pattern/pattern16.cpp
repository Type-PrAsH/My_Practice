#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int pattern{65};
    int count{65};
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1;j++)
        {
            std::cout<<static_cast<char>(pattern);
        }
        pattern++;
        std::cout<<std::endl;
    }

    return 0;
}