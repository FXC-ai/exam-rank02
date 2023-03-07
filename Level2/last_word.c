/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:02:18 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/14 20:39:50 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>


int main (int a, char *b[])
{
	int i = 0;
	int size = 0;
	char *str;

	if (a == 2)
	{
		str = b[1];
		while (str[i] != '\0')
		{
			//printf("%c\n", str[i]);
			size++;
			i++;
		}
		i--;
		
		while (str[i] == ' ' || str[i] == '\t' && size > 1)
		{
			//printf("size = %d c = %c\n", size, str[i]);
			size--;
			i--;
		}
		//i--;
		
		while (str[i] > 32 && str[i] <= 126)
		{
			//printf("%c\n", str[i]);
			i--;
		}
		i++;	
		
		while (str[i] > 32 && str[i] <= 126)
		{
			write(1, &str[i],1);
			i++;
		}
	}
	write(1,"\n",1);

	return 0;
}
