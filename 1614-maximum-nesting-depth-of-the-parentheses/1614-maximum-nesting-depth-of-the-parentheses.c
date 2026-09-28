int maxDepth(char* string) 
{
    int max_nest = 0;
    int nest_counter=0;
    for (int i= 0;;i++)
    {
        if(string[i]=='\0')
        {
            break;
        }
        if(string[i]=='(')
        {
            nest_counter = nest_counter + 1;
            if(max_nest<nest_counter)
            {
                max_nest = nest_counter;
            }
        }
        if(string[i]==')')
        {
            nest_counter = nest_counter - 1;
        }
    }
    return max_nest;
}