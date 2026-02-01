//practice for width with setw and setfill

#include<iostream>
#include<iomanip>
int main()
{
    long port{2425785}, high{47}, low{9761};

    std::cout<<std::setw(8)<<"LOCATION"<<std::setw(12)<<"POPULATION\n"
             <<std::setw(8)<<"Portcity"<<std::setw(12)<<port<<"\n"
             <<std::setw(8)<<"Hightown"<<std::setw(12)<<high<<"\n"
             <<std::setw(8)<<"Lowville"<<std::setw(12)<<low<<"\n\n\n\n\n\n";

    std::cout<<std::setw(8)<<"LOCATION"<<std::setw(12)<<std::setfill('.')<<"POPULATION\n"
             <<std::setw(8)<<"Portcity"<<std::setw(12)<<std::setfill('.')<<port<<"\n"
             <<std::setw(8)<<"Hightown"<<std::setw(12)<<std::setfill('.')<<high<<"\n"
             <<std::setw(8)<<"Lowville"<<std::setw(12)<<std::setfill('.')<<low<<"\n";
             
}