/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:15:43 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 15:22:02 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>



int	is_lowercase (char c)
{
	
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}


int	is_uppercase (char c)
{
	
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

int	is_numeric (char c)
{
	
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

int is_alphanumeric (char c)
{
	if (is_lowercase(c) || is_uppercase(c) || is_numeric(c) )
	{
		return (1);
	}
	return (0);
}

int is_printable (char c)
{
	if (c > 32 && c <127)
	{
		return (1);
	}
	return (0);
}

char	*ft_capitalize (char *str)
{
	
	int i = 0;
	
	//printf("test = %s\n", str);
	
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	
	i++;

	//printf("test = %s\n", str);
	
	while (str[i] != '\0')
	{

		if ( is_uppercase(str[i]) )
		{
			str[i] = str[i] + 32;
		}

		if (is_lowercase(str[i]) && (str[i-1] == ' ' || str[i-1] == '\t' ))
		{
			str[i] = str[i] - 32;
		}

		i++;
	}
	
	//printf("test = %s\n", str);
	
	
	return str;
}

void	ft_putchar(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}


}

int main (int argc, char *argv[])
{
	(void) argv;
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_putchar(ft_capitalize(argv[i]));
			write(1, "\n",1);
			i++;
		}
		
		i++;

	}
	else
	{
		write (1,"\n",1);
	}
	//char c = ' ';

	//printf("is_printable = %d / lower = %d / upper = %d / alphanum = %d", is_printable(c), is_lowercase(c), is_uppercase(c), is_alphanumeric(c));




	return 0;
}
