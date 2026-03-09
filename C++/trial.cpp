#include<iostream>

class Distance
{
    private:
        int feet;
        float inches;

        
    public:

    void set_zero()
    {
        feet = 0;
        inches = 0;
    }

    void get()
    {
        std::cout<<"Enter feet: ";
        std::cin>>feet;
        std::cout<<"Enter inches: ";
        std::cin>>inches;

    }
    void show()
    {
        std::cout<<feet<<" "<<inches;
    }
    void add_dist(Distance d1)
    {
        inches = inches + d1.inches;

        if(inches >= 12.0)
        {
            feet++;
            inches = inches - 12;
        }
        
        feet = feet + d1.feet;
    }
};

int main()
{
    Distance dist1, dist2, dist3;

    dist1.get();
    dist2.get();

    dist1.add_dist(dist2);

    dist1.show();

    return 0;

}