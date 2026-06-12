//++(prefix inc) operator overloading

#include<iostream>
using namespace std;

class A
{
    private:

    int count;

    public:

    A()
    {
        count=0;
    }

    int get_count()
    {
        return count;
    }
    void pre_inc()
    {
        ++count;
    }

    void operator ++ ()
    {
        ++count;
    }
};


int main()
{
    A c1, c2, c3;

    int tri;

    tri=0;

    ++tri;
    ++tri;
    ++tri;

    cout<<tri<<endl;

    c1.pre_inc();


    ++c1;
    cout<<c1.get_count()<<endl;


    ++c2;
    ++c2;
    cout<<c2.get_count()<<endl;


    c3 = c2;
    cout<<c3.get_count()<<endl;
    
    return 0;
}
