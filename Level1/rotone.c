/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:11:04 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 14:40:35 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
	(void) argv;
	char *str = argv[1];
	int i = 0;
	char digit;


	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			digit = (((str[i] - 97) + 1)%26)+97 ;	
			write (1,&digit,1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			digit = (((str[i] - 65) + 1)%26)+65 ;	
			write (1,&digit,1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}



}
