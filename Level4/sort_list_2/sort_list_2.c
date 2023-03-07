/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:26:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/22 15:59:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//t_list	*sort_list(t_list* lst, int (*cmp)(int, int));
int croissant(int a, int b);

int croissant(int a, int b)
{
	return (a <= b);
}

int ft_size_lst (t_list *lst)
{
	int i = 0;

	while (lst[i].next != NULL)
	{
		i++;
	}	
	
	return (i + 1);

}



t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{	
	int i;
	int size_lst = ft_size_lst(lst);
	(void) cmp;
	t_list	*temp;

	printf("size_lst = %d\n", size_lst);

	i = 0;
	t_list *ptr_list;
	
	ptr_list = &lst[0];
	while (i < (size_lst - 2))
	{
		printf ("i =  %d \n", i);
		if (cmp (ptr_list->data, ptr_list->next->data) == 0)
		{
			temp = ptr_list->next;
			ptr_list->next = ptr_list->next->next;
			ptr_list->next->next = temp;

		}
		ptr_list = &lst[i];
		i++;
	}


	/*
	ptr_list = &lst[0];
	while (ptr_list->next != NULL)
	{
		printf ("actuel : %d || suivant : %d \n", ptr_list->data, ptr_list->next->data);
		ptr_list = ptr_list->next;
	}
	*/
	return lst;
}


int main ()
{	
	t_list *tab; 	
	int i;
	int (*ptr_croissant)(int, int);

	ptr_croissant = &croissant;
	tab = malloc(sizeof(t_list) * 5);
	
	tab[0].data = 12;
	tab[1].data = 11;
	tab[2].data = 15;
	tab[3].data = 16;
	tab[4].data = 0;

	tab[0].next = &tab[1];
	tab[1].next = &tab[2];
	tab[2].next = &tab[3];
	tab[3].next = &tab[4];
	tab[4].next = NULL;


	
	i = 0;
	while (tab[i].next != NULL)
	{
		printf("tab[%d].data = %d \ntab[%d].next = %p\n", i, tab[i].data, i, tab[i].next);
		i++;
	}

	printf("tab[%d].data = %d \ntab[%d].next = %p\n", i, tab[i].data, i, tab[i].next);
	

	sort_list(tab, ptr_croissant);


	i = 0;
	while (tab[i].next != NULL)
	{
		printf("tab[%d].data = %d \ntab[%d].next = %p\n", i, tab[i].data, i, tab[i].next);
		i++;
	}

	return 0;
}
