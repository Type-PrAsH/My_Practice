for(int pattern_after=current_state-1; pattern_after<current_state-i-1; pattern_after++)
        {
            if(current_state==64)
            {
                std::cout<<' ';
            }
            else
                std::cout<<static_cast<char>(pattern_after);
        }