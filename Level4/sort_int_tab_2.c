/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:00:24 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/22 16:51:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_check_nums(int a, int b)
{

	return (a <= b);


}


void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int temp;

	while (j <= size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (ft_check_nums(tab[i], tab[i+1]) == 0)
			{
				temp = tab[i];
				tab[i] = tab [i+1];
				tab[i+1] = temp;	
			}
			i++;
		}
		j++;
	}
}


int main()
{

	int tab[10];
	int size = 10;

	tab[0] = 12;
	tab[1] = 11;
	tab[2] = 10;
	tab[3] = 9;
	tab[4] = -7;
	tab[5] = -7;
	tab[6] = -8;
	tab[7] = -17;
	tab[8] = -20;
	tab[9] = -7;



	
	int i = 0;
	

	sort_int_tab(tab, size);

	while (i < size)
	{
		printf("result[%d] = %d\n", i, tab[i]);
		i++;
	}


	return (0);
}
