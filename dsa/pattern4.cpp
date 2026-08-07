#include<iostream>
int main()
{
    int n;

    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        int k = i+1;
        for(int j=0; j<i+1; j++)
        {
            std::cout<<k;
        }
        std::cout<<std::endl;
        k++;
    }
    return 0;
}