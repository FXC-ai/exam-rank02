/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:49:01 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/15 20:10:58 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	return c;
}


int main (int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int check = 0;


	//printf("size str1 = %d", size_str1);

	if (argc == 3)
	{

		char *str1 = argv[1];
		char *str2 = argv[2];

		int size_str1 = ft_strlen(str1);
		int size_str2 = ft_strlen(str2);
		while (str1[i] != '\0')
		{	
			while (str2[j] != '\0')
			{
				if (str1[i] == str2[j])
				{
					check++;
					break;
				}
				j++;
			}
			i++;
		}
		i = 0;
		if (check == size_str1)
		{
			while (str1[i] != '\0')
			{
				write (1, &str1[i],1);
				i++;
			}
		}
	}
	write (1, "\n",1);
}
