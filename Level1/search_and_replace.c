/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:34:03 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 20:00:26 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;

	return c;
}

int main(int argc, char *argv[])
{
	int i;
	int len_arg1 = ft_strlen(argv[1]);
	int len_arg2 = ft_strlen(argv[2]);
	int len_arg3 = ft_strlen(argv[3]);

	if (argc == 4 && len_arg1 != 0 && len_arg2 == 1 && len_arg3 == 1)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
			{
				write (1, &argv[3][0], 1);
			}
			else
			{
				write (1, &argv[1][i],1);

			}
			i++;
		}
	}

	write (1, "\n", 1);

	return 0;
}
