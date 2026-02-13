//program to count paying car and non paying cars in tollbooth

#include<iostream>
#include<iomanip>

class tollbooth 
{
    unsigned int number_of_car;
    double total_amount;

    public:

    tollbooth(): number_of_car(0), total_amount(0)
    {}

    void payingCar()
    {
        number_of_car++;
        total_amount += 0.50;
    }

    void noPayCar()
    {
        number_of_car++;
    }

    void displayBoth()
    {
        std::cout<<"Number of cars: "<<number_of_car<<"\n";
        std::cout<<"Total Amount: $"<<std::fixed<<std::setprecision(2)<<total_amount<<"\n";
    }
};

int main()
{
    tollbooth car{};

    char ch{};

    std::cout<<"Press C to count paying car\nPress D to count non-paying car\nPress Esc to print total car, total cash and exit\n";
    std::cin>>ch;

    while(true)
    {
        if(ch=='C' || ch=='c')
        {
            car.payingCar();
        }
        else if(ch=='D' || ch=='d')
        {
            car.noPayCar();
        }
        if(ch == 27)
        {
            car.displayBoth();
            break;
        }
        std::cout<<"Press C to count paying car\nPress D to count non-paying car\nPress Esc to print total car, total cash and exit\n";
        std::cin>>ch;
    }

    return 0;
}