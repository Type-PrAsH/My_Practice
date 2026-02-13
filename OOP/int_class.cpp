//program to create int data type through class

#include<iostream>

class Int
{
    int x;

    public: 

    Int() : x(0)
    {}
    
    Int(int x1) : x(x1)
    {}

    void display()
    {
        std::cout<<x<<std::endl;
    }

    Int addInt(Int twox, Int threex)
    {
        Int temp;

        temp.x = twox.x + threex.x; 

        return temp;
    }
};

int main()
{
    Int one;
    Int two(31), three(32);

    one = one.addInt(two, three);

    one.display();

    return 0;
}