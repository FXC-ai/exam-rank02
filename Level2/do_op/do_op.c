/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:07:46 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/15 20:41:24 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "do_op.h"

int main (int argc, char *argv[])
{
	int nbr1;
	int nbr2;
	int result;

	
	if (argc == 4)
	{

		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[3]);
		if (argv[2][0] == '+')
		{
			result = nbr1 + nbr2;
		}
		else if (argv[2][0] == '-')
		{
			result = nbr1 - nbr2;
		}
		else if (argv[2][0] == '*')
		{
			result = nbr1 * nbr2;
		}
		else if (argv[2][0] == '/')
		{
			result = nbr1 / nbr2;
		}
		printf("%d\n", result);
	}
	else
	{
		write (1, "\n",1);
	}
	return 0;
}
