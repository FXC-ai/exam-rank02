/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:56:38 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/22 11:20:07 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	
	}
	return (i);

}

int ft_is_hidden(char *s1, char *s2)
{
	int i;
	int j;
	(void) s2;
	
	int check = ft_strlen(s1);
	int count = 0;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				count++;
				j++;
				break;
			}
			j++;
		}		
		i++;
	}
	
	if (count == check)
	{
		return (1);
	}

	return 0;
}	



int main (int argc, char *argv[])
{
	
	char result;


	result = '0';
	if (argc == 3)
	{
		result += ft_is_hidden(argv[1], argv[2]);
		write (1, &result, 1);
	}

	write (1,"\n",1);

	
	return 0;
}
