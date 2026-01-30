#include<iostream>
int main()
{
    int num{};

    std::cout<<"Enter a Number: ";
    std::cin>>num;
    std::cout<<"\n\n\n";
    
    for(int i = 0; i<200; i += 10 )
    {
        std::cout<<num * (1+i)<<"\t"<<num * (2+i)<<"\t"<<num * (3+i)<<"\t"<<num * (4+i)<<"\t"<<num * (5+i)<<"\t"
                 <<num * (6+i)<<"\t"<<num * (7+i)<<"\t"<<num * (8+i)<<"\t"<<num * (9+i)<<"\t"<<num * (10+i)<<"\t"
                 <<"\n\n\n";
    }
    
    return 0;
}