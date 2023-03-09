/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:43:50 by fcoindre          #+#    #+#             */
/*   Updated: 2023/03/09 14:03:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>


int check_before (int ind, char *str1)
{
	int i = ind - 1;
	while (i >= 0)
	{
		if (str1[ind] == str1[i])
		{
			return (1);
		}
		i--;
	}
	return 0;
}

int check_caract(char c, char *str2)
{
	int i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int main(int a, char *argv[])
{

	if (a != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	


	char *str1 = argv[1];
	char *str2 = argv[2];
	int i;



	i = 0;
	while (str1[i] != '\0')
	{
		if (check_caract(str1[i], str2) == 1 && check_before(i, str1) == 0)
		{
			write(1, &str1[i], 1);
		}
		i++;
	}

		
	write(1,"\n",1);
	return 0;
}
