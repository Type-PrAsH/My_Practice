//write a program for unary operator overloading using friend function

#include<iostream>
using namespace std;

class A
{
    private:
    int count;

    public:
    A() 
    {
        count = 0; 
    }

    int get_count() 
    { 
        return count; 
    }

    friend void operator++(A& a);
};

void operator++(A& a)
{
    ++a.count;
}

int main()
{
    A c1, c2, c3;

    ++c1;
    cout << c1.get_count() << endl;   //1

    ++c2;
    ++c2;
    cout << c2.get_count() << endl;   //

    c3 = c2;
    cout << c3.get_count() << endl;   

    return 0;
}