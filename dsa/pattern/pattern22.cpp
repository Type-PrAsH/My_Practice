#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int i=0; i<(2*n)-1; i++)
    {
        for(int j=0; j<(2*n)-1; j++)
        {
            int top{i}; 
            int left{j};
            int right{(2*n-2)-j};
            int down{(2*n-2)-i};
            std::cout<<(n-std::min(std::min(top,down), std::min(left,right)));
        }
        std::cout<<std::endl;
    }

    return 0;

}