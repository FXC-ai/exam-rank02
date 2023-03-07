#include <stdio.h>
#include <unistd.h>


int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1,"\n",1);
        return 0;
    }
    
    char *str = argv[1];
    
    int i;
    int start;
    int end;
    int count_word;
    
    count_word = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ') {
            count_word++;
        }
        i++;
    }
    
    end = i;
    while (count_word > 0)
    {
        while (str[i] != ' ')
        {
            i--;
        }
        start = i + 1;
        while (start < end)
        {
            write(1,&str[start],1);
            start++;
        }
        write(1," ",1);
        
        end = i;
        i--;
        count_word--;
    }
    
    i = 0;
    
    while (str[i] != ' ')
    {
        write(1,&str[i],1);
        i++;
    }
    write(1,"\n",1);
    return 0;
}
