//program to convert the smaller of two int number to 0;

#include<iostream>

void zeroSmaller(int &af, int &bf)
{
    if(af < bf)
    {
        af=0;
    }
    else if(af>bf)
    {
        bf=0;
    }
    else
    {
        std::cout<<"Both Equal, Invalid Input"<<"\n";
    }
}

int main()
{
    int a{}, b{};

    std::cout<<"Enter two number: ";
    std::cin>>a>>b;

    zeroSmaller(a, b);

}