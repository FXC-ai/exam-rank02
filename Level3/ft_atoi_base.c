#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    (void) str_base;
    int result;
    int chk_min;
    int i;
    int j;
    char *BASE = "0123456789ABCDEF";
    char *base = "0123456789abcdef";
    
    chk_min = 1;
    i = 0;
    if (str[0] == '-') {
        chk_min = -1;
        i++;
    }
    
    result = 0;
    while (str[i] != '\0') {
        j = 0;
        
        while (j < str_base)
        {
            if (BASE[j] == str[i] || base[j] == str[i])
            {
                break;
            }
            j++;
        }
        if (j == str_base)
        {
            return 0;
        }
        result = result * str_base + j;
        i++;
    }
    
    return result * chk_min;
}

int main ()
{
    char *test[6];
    test[0] = "-2147483648";
    test[1] = "0";
    test[2] = "-1";
    test[3] = "-F";
    test[4] = "-12d";
    test[5] = "2147483647";
    
    
    printf("r = %d\n",ft_atoi_base(test[5], 10)); //==> 255
    printf("r = %d\n",ft_atoi_base("11101", 4)); //==> 7
    
    
    //printf("%d puissance %d = %d", 16,3,puissance(16,1));
    
}
