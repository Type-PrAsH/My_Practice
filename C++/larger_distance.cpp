//gives larger distance

#include<iostream>

void largerDistance(int df1, int df2)
{
    if(df1 > df2)
    {
        std::cout<<"Larger is: "<<df1<<"\n";
    }
    else if(df2 > df1)
    {
        std::cout<<"Larger is: "<<df2<<"\n";
    }
    else
    {
        std::cout<<"Invalid Input!! both equal";
    }
}

int main()
{
    int d1{}, d2{};

    std::cout<<"\nEnter 2 Distances: ";
    std::cin>>d1>>d2;

    largerDistance(d1, d2);

    return 0;
}