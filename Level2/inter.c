/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:43:50 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 14:56:06 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>


int check_before ()
{


}

int main(int a, char *arg[])
{
		
	char *str1 = arg[1];
	char *str2 = arg[2];
	int i = 0;
	int j = 0;

	while (str1[i] != '\0')
	{
		j = 0;

		//printf("%c", str1[i]);
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				printf("%c", str2[j]);
				break;
			}
			j++;
		}
		i++;
	}




}
