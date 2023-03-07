#include <unistd.h>
#include <stdio.h>

int check_before (int i,  char *str)
{
	int e = i;
	i--;
	while (i >= 0)
	{
		if (str[e] == str[i])
		{
			return 0;
		}
		i--;
	}

	return 1;
}

int check_before_both (int i, char *str1, char *str2)
{
	int k = 0;

	while (str1[k] != '\0')
	{
		if(str1[k] == str2[i])
		{
			return 0;
		}
		k++;
	}

	if (check_before (i, str2) == 0)
	{
		return 0;
	}

	return 1;

}


int main (int argc, char *argv[])
{

	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		int i = 0;
		int j = 0;

		while (str1[i] != '\0')
		{
			if (check_before(i, str1) == 1)
			{
				write (1,&str1[i],1);
			}
			i++;
		}
		
		while (str2[j] != '\0')
		{
			if (check_before_both(j, str1, str2 ) == 1)
			{
				write (1,&str2[j],1);
			}
			j++;

		}


	}
	
	write (1, "\n",1);

	printf("R = %d", check_before(0,  "aaaaccc"));

	return 0;
}
