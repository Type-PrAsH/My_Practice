//permutation of guest and chair

#include<iostream>
int main()
{
    int guest{}, chair{}, arrangement{1};

    std::cout<<"\nEnter Number Of Guest: ";
    std::cin>>guest;

    std::cout<<"\nEnter Number Of Chair: ";
    std::cin>>chair;

    for(int i=0; i<chair; i++)
    {
        arrangement *= guest;
        guest--;
    }

    std::cout<<"The Number Of Arrangements Possible is: "<<arrangement<<"\n\n";

    return 0;
}