/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:23:28 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 14:10:24 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int tab[8] = {0,0,0,0,0,0,0,0};
	int i = 7;
	unsigned char digit;

	if (octet == 128)
	{
		write(1,"11111111", 8);
	}
	else
	{
		while (i >= 0)
		{

			tab[i] = octet % 2;
			printf("tab[%d] = %d\n",i, tab[i]);
			octet = octet / 2;
			i--;
		}
	
	//printf("i = %d", i);
		i = 7;
		while (i >= 0)
		{
			digit = tab[i] + 48;
			write (1, &digit, 1);
			i--;
		}
	}

}


void print_bits2(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

int main()
{
	unsigned char octet = 8;
	print_bits(octet);
	printf("  \n");
	print_bits2(octet);

}
