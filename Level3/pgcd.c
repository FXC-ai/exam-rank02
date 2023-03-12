#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
{
    
    if (argc != 3) {
        printf("\n");
        return 0;
    }
    
    int nb1 = atoi(argv[1]);
    int nb2 = atoi(argv[2]);
    
    
    int PGCD;
    
    if (nb1 > nb2)
    {
        PGCD = nb2;
    }
    else
    {
        PGCD = nb1;
    }
    
    
    while (PGCD > 0) {
        if (nb1 % PGCD == 0 && nb2 % PGCD == 0) {
            printf("%d\n", PGCD);
            return 0;
        }
        PGCD--;
    }
    
    
    printf("%d\n", PGCD);
    return 0;
}

