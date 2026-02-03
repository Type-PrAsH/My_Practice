#include<iostream>
int main()
{
    struct point
    {
        int x{}, y{};
    };

    point point1{}, point2{}, point3{};

    std::cout<<"\nEnter Co-ordinates for point 1: ";
    std::cin>>point1.x>>point1.y;

    std::cout<<"\nEnter Co-ordinates for point 2: ";
    std::cin>>point2.x>>point2.y;

    point3.x = point1.x + point2.x;
    point3.y = point1.y + point2.y;

    std::cout<<"\nCo-ordinates for P1 + P2 are: "<<point3.x<<", "<<point3.y<<"\n";

    return 0;
}