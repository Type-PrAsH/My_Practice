//program to add 2 times and display in 12 hour format

#include<iostream>

class Time
{
    int hours;
    int minutes;
    int seconds;

    public: 

    Time(): hours(0), minutes(0), seconds(0)
    {}

    Time(int h, int m, int s): hours(h), minutes(m), seconds(s)
    {}

    void changeIn12()
    {
        switch(hours)
        {
            case 13: hours = 1; break;
            case 14: hours = 2; break;
            case 15: hours = 3; break;
            case 16: hours = 4; break;
            case 17: hours = 5; break;
            case 18: hours = 6; break;
            case 19: hours = 7; break;
            case 20: hours = 8; break;
            case 21: hours = 9; break;
            case 22: hours = 10; break;
            case 23: hours = 11; break;

        }

        std::cout<<"In 12-hour Format"<<hours<<":"<<minutes<<":"<<seconds<<std::endl;

    }

    void addTime(Time T2, Time T3)
    {

        seconds = T3.seconds + T2.seconds;
        minutes = T3.minutes + T2.minutes;
        hours = T3.hours + T2.hours;

            if(seconds>59)
            {
                seconds -= 60;
                minutes ++;
            }
            if(minutes>59)
            {
                minutes -= 60;
                hours++;
            }
            if(hours>23)
            {
                hours -= 0;
            }

        std::cout<<"In 24-hour Format"<<hours<<":"<<minutes<<":"<<seconds<<std::endl;
        

    }
};

int main()
{
    Time t1;
    Time t2(10, 59, 59), t3(2, 59, 59);


    t1.addTime(t2, t3);

    t1.changeIn12();

    return 0;
}