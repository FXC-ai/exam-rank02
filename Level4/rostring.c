#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        write(1,"\n",1);
        return 0;
    }
    
    char *test = argv[1];
    int i;
    int count_word;
    int flag;
    int i_first_wd;
    int size_first_wd;

    //
    i = 0;
    while (test[i] == ' ' || test[i] == '\t')
    {
        i++;
    }



    i_first_wd = i,
    flag = 0;
    count_word = 0;
    while (test[i] != '\0')
    {
        if (test[i] == ' ' || test[i] == '\t')
        {
            flag = 0;
        }
        else
        {
            if (flag == 0)
            {
                flag = 1;
                count_word += 1;
            }   
        }
        i++;
    }
    
    if (count_word == 0)
    {
        write(1,"\n",1);
        return 0;
    }
    


    i = i_first_wd;
    size_first_wd = 0;
    while (!(test[i] == '\t' || test[i] == ' '))
    {
        size_first_wd++;
        i++;
    }
    

    if (count_word > 1)
    {
        while ((test[i] == '\t' || test[i] == ' '))
        {
            i++;
        }
        flag = 1;
        while (test[i] != '\0')
        {
            if (test[i] == ' ' || test[i] == '\t')
            {
                flag = 0;
            }
            else
            {
                if (flag == 0)
                {
                    flag = 1;
                    write(1," ",1);
                }
                write(1,&test[i],1);
            
            }

            i++;
        }
    
        write(1," ",1);

        i = i_first_wd;
        while (size_first_wd)
        {
            write(1,&test[i],1);
            i++;
            size_first_wd--;
        }
    }
    else
    {
        i = i_first_wd;
        
        while (size_first_wd)
        {
            write(1,&test[i],1);
            i++;
            size_first_wd--;
        }
        
    }
    write(1,"\n",1);
    /*
    printf("\n\ncount word = %d\ni_first_word = %d\nsize_first_wd= %d\nsize_str=%d",
             count_word, i_first_wd, size_first_wd, size_str);
    */

    return 0;
}
