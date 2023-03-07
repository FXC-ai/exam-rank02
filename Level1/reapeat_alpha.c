#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	int i = 0;
	int ind = 0;
	(void) argc;

	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			ind = argv[1][i] - 96;
			while (ind > 0)
			{
				write(1,&argv[1][i],1);
				ind--;
			}
		}
		else
		{
			write(1,&argv[1][i],1);
		}
		i++;
	}
	
	write(1, "\n",1);

	return 0;
}
