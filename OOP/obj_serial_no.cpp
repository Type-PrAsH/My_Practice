#include<iostream>

class Serial
{
    int id;
    static int count;

    public:
    Serial()
    {
        count++;
        id = count;
    }

    void showid()
    {
        std::cout<<"I am object number "<<id<<std::endl;
    }
};
int Serial::count = 0;

int main()
{
    Serial s1, s2;

    s1.showid();
    s2.showid();

    return 0;
}
