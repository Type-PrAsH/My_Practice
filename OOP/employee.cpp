//program to keep data of employee

#include<iostream>
#include<iomanip>

class employee
{
    int employee_no;
    double employee_com;
    static int no_of_employee;

    public:
    void getData()
    {
        std::cout<<"Enter Employee Number: ";
        std::cin>>employee_no;

        std::cout<<"Enter Employee Compensation: ";
        std::cin>>employee_com;

        no_of_employee++;
    }

    void displayData()
    {
            std::cout<<std::setw(5)<<employee_no
                     <<std::setw(5)<<std::setprecision(2)<<employee_com<<std::endl;
    }
};

int employee::no_of_employee = 0;

int main()
{
    employee e1, e2, e3;

    e1.getData();
    e2.getData();
    e3.getData();

    e1.displayData();
    e2.displayData();
    e3.displayData();
    return
     0;
}