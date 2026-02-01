// program to add two old style british currency amounts 

#include<iostream>
int main()
{
    int pound1{}, shilling1{}, pence1{};
    int pound2{}, shilling2{}, pence2{};
    
    char dummychar{};

    do
    {
        std::cout<<"Enter First Amount: ";
        std::cin>>pound1>>dummychar>>shilling1>>dummychar>>pence1;

        std::cout<<"Enter Second Amount: ";
        std::cin>>pound2>>dummychar>>shilling2>>dummychar>>pence2;

        




        std::cout<<"Do You Wish To Continue(y/n)? ";
        std::cin>>dummychar;

    }while(dummychar=='y');

    
}