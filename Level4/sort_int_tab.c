#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size_tab)
{
    int i;
    int j;
    int temp;
    
    j = 0;
    while (j < size_tab)
    {
        i = 0;
        while (i < size_tab - 1)
        {
            if (tab[i] > tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
            }
            i++;
        }
        j++;
    }
}

int main ()
{
 
    
    int tab[10] = {19999999,-2147483648,0,5,21474836, 42, 20, 20, 9745, -214748364};
    
    sort_int_tab(tab, 7);
    
    printf("\n--------\n");
    int i = 0;
    while (i < 7)
    {
        printf("%d : %d\n", i, tab[i]);
        i++;
    }
}
