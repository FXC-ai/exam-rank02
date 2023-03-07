#include <stdio.h>
#include <stdlib.h>


void display_prime(int nb)
{
    int div = 2;
    
    while(div <= nb)
    {
        if (nb % div == 0) {
            
            printf("%d",div);
            break;
        }
        div++;
    }
    if (nb / div != 1) {
        printf("*");
        display_prime(nb / div);
    }
    
    
}



int main (int argc, char *argv[])
{
 
    if (argc != 2) {
        
        printf("\n");
        return (0);
    }
    
    int nb;
    
    nb = atoi(argv[1]);

    
    //printf("nb = %d\n", nb);

    if (nb == 0) {
        printf("\n");
        return 0;
    }
    
    
    if (nb == 1) {
        printf("1\n");
        return 0;
    }
    
    display_prime(nb);
    
    printf("\n");
    return (0);
}
