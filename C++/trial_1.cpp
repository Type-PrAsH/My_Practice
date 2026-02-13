#include<iostream>

void swap(int &first, int &second)
{
    int temp{second};

    second = first;
    first = temp;

    
}
int main()
{
    int a, b;

    std::cout<<"Enter 1st number: ";
    std::cin>>a;
    std::cout<<"Enter 2nd number: ";
    std::cin>>b;

    swap(a, b);

    std::cout<<a<<" "<<b;
}
