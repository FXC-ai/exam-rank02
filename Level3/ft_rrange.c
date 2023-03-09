#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{

    int range = end - start;
    int i;


    if (range < 0)
    {
        range = -range;
    }
    
    //printf("range = %d\n", range);

    int *tab = malloc(sizeof(int) * (range + 1));
    if (tab == NULL)
    {
        return NULL;
    }
    
    if (end == start)
    {
        tab[0] = start;
        return tab;
    }
    
    i= 0;
    while (end >= start)
    {
        tab[i] = end; 
        i++;
        end--;
    }
    

    while (end <= start)
    {
        tab[i] = end; 
        i++;
        end++;
    }

    return tab;
}


#include <math.h>

int main()
{
    int start = 0;
    int end = 0;
    int i = 0;

    int *tab = ft_rrange(start, end);

    while (i < (abs(end - start)+1))
    {
        printf("%d\n", tab[i]);
        i++;
    }
    



    return 0;
}
