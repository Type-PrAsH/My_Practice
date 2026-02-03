#include<iostream>

double power(double nf, int pf)
{
    double no{1};
    for(int i=0; i<pf; i++)
    {
        no *= nf;
    }

    return no;
}

int main()
{
    double n{}, p{};

    std::cout<<"Enter Number and power: ";
    std::cin>>n>>p;

    std::cout<<"\n"<<power(n, p)<<"\n";

    return 0;
}