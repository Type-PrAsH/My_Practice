//dollar to british, french, german, japanese

#include<iostream>
int main()
{
    double dollar, france, german, british, japan;
    
    std::cout<<"Enter the amount in Dollar:\n";
    std::cin>>dollar;

    std::cout<<"In Dollar: "<< dollar<<std::endl
             <<"In Pound: "<< dollar * 1.487<<std::endl
             <<"In Franc: "<< dollar * 0.584<<std::endl
             <<"In yen: "<< dollar * 0.00955<<std::endl
             <<"In deutshemark: "<< dollar * 0.584<<std::endl;
 
    return 0;
}