#include<iostream>
int main()
{
    int n;
    std::cin>>n;

    for(int i=0; i<n; i++)
    {
        int current_state=65;
        for(int space_before=0; space_before<n-i-1; space_before++)
        {
            std::cout<<' ';
        }
        for(int pattern_before=65; pattern_before<65+i; pattern_before++)
        {
            std::cout<<static_cast<char>(pattern_before);
            current_state++;
        }
        std::cout<<static_cast<char>(65+i);        

        for(int pattern_after=current_state-1; pattern_after>current_state-i-1; pattern_after--)
        {
            if(current_state==64)
            {
                std::cout<<' ';
            }
            else
                std::cout<<static_cast<char>(pattern_after);
        }
        std::cout<<std::endl;
    }

    return 0;
}