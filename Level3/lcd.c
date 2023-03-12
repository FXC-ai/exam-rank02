#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
        
    unsigned int HCF;
    unsigned int i;
    
    if (a == 0) {
        return 0;
    }
    
    if (b == 0) {
        return 0;
    }
    
    if (a > b)
    {
        HCF = b;
    }
    else
    {
        HCF = a;
    }
    
    
    while (HCF > 0)
    {
        if (a%HCF == 0 && b%HCF == 0) {
            return (a*b) / HCF;
        }
        HCF--;
    }
    
    return 0;
    

}



int main()
{
    unsigned int a = 18;
    unsigned int b = 4;
    
    unsigned int result = lcm(a, b);
    
    printf("result = %d\n", result);
    
    
    return 0;
}
