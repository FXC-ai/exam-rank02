/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:00:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 18:23:18 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int find_size_nb(int nb, int is_negativ)
{
	int size = 0;
	while (nb > 0)
	{
		nb = nb /10;
		size++;
	}
	if (is_negativ == -1)
	{
		size = size + 1;
	}
	return size;
}


char *ft_itoa(int nb)
{
	
	char *tab = NULL; 
	int is_negativ = 1;
	int size = 0;

	if (nb == -2147483648)
	{
		tab = malloc(sizeof(char) * (12));
		tab[0] = '-';
		tab[1] = '2';
		tab[2] = '1';
		tab[3] = '4';
		tab[4] = '7';
		tab[5] = '4';
		tab[6] = '8';
		tab[7] = '3';
		tab[8] = '6';
		tab[9] = '4';
		tab[10] = '8';
		tab[11] = '\0';

		return tab;
	}

	if (nb < 0)
	{
		nb = -nb;
		is_negativ = -1;
	}

	size = find_size_nb(nb, is_negativ);

	tab = malloc (sizeof(char) * (size + 1));
	if (tab == NULL)
		return NULL;

	tab[size] = '\0';
	size = size - 1;
	while (size >= 1)
	{
		tab[size] = (nb % 10) + 48;
		nb = nb /10;
		size--;
	}

	if(is_negativ == -1)
		tab[0] = '-';
	else
		tab[0] = nb + 48;

	return tab;
}

int main ()
{
	int test =  -2000047;

	char *result = ft_itoa(test);

	printf("result = %s", result);

	return 0;

}
