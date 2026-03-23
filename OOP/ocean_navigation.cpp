#include<iostream>

class Angle
{
    int degrees;
    float minutes;
    char direction;

    public:

    Angle(int degrees, float minutes, char direction): degrees(degrees), minutes(minutes), direction(direction)
    {}
    void getposition()
    {
        std::cout<<"Enter Degrees";
        std::cin>>degrees;
        std::cout<<"Enter Minutes";
        std::cin>>minutes;
        std::cout<<"Enter Direction";
        std::cin>>direction;
    }

    void showposition()
    {
        std::cout<<degrees<<"\xf8"<<minutes<<"\'"<<direction<<std::endl;
    }


};

int main()
{
    Angle a(23, 3.3,'E');

    a.showposition();

    do
    {
        a.getposition();
        a.showposition();
    }while(1);

    return 0;
}
