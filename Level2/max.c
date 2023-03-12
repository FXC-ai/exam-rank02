#include <stdio.h>
#include <stdlib.h>

int max(int *tab, int size)
{
    
    int i;
    int max = tab[0];
    
    
    i = 0;
    
    while (i < size) {
        
        if (tab[i] > max) {
            max = tab[i]
        }
        
        i++;
    }
    
    return max;
    
}




int main ()
{
    int tab[4] = {22,222,22222,9};
    
    
    printf("%d", max(tab);
    
    return 0;
}
