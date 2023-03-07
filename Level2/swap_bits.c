/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:57:41 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/15 21:10:28 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
unsigned char	swap_bits(unsigned char octet)
{


}*/


int main ()
{
	unsigned char octet = 120;
	return ((octet >> 4) + (octet << 4));

}
