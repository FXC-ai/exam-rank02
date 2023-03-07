#include <stdio.h>

void	ft_swap(int *a, int *b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;


}



int main ()
{
	int a = 15;

	int b = 1500;

	printf("a = %d et b = %d\n", a, b);
	ft_swap (&a, &b);
	printf("a = %d et b = %d", a, b);
	


	return 0;
}
