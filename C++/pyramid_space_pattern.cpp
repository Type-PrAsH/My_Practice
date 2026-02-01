#include<iostream>
using namespace std;
int main()
{
    int j{};
    
    for(int i=0;i<20;i++)
    {
        for(j=0; j < (19-i); j++)
        {
            cout<<" ";
        }
        for(int k = 0; k<((2*i) + 1); k ++)
        {
            cout<<"X";
        }
        cout<<"\n";
    }

    return 0;
}