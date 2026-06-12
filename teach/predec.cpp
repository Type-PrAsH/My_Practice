#include<iostream>
using namespace std;

class A
{
    private:

    int count;

    public:

    A()
    {
        count =0;
    }
    void get_count()
    {
        cout<<count<<endl;
    }

    void operator --()
    {
        --count;
    }
};

int main()
{
    A c1, c2, c3;

    c1.get_count();
    c2.get_count();
    c3.get_count();

    --c1;
    --c1;

    c1.get_count();

    --c2;
    c2.get_count();

    c3=c2;
    c3.get_count();

    return 0;
}