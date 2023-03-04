#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void	print_list(t_list **begin_list)
{
 	t_list *cur = *begin_list;
 	while (cur != 0)
 	{
		char *str = (char *) cur->data;
 		printf("(%p) data = %s next = %p\n",cur, str, cur->next);
 		cur = cur->next;
 	}
}



t_list	*find_previous(t_list **begin_list, t_list *nod)
{
	t_list *cur = *begin_list;
	int i = 0;
	int c = 0;

	//printf("Test pour : %s\n", (char *) nod->data);

	while (cur != NULL)
	{
		if (cur == nod)
		{
			break;
		}
		cur = cur->next;
		i++;
	}	
	
	

	if (i == 0)
	{
		//printf("kesskifoula\n");
		return NULL;
	}	

	cur = *begin_list;
	while(c < i - 1)
	{	
		cur = cur->next;
		c++;
	}

	//printf("element precedent  = %p\n", (char *) cur->data);


	return (cur);
}



void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	
	t_list	*cur;
	t_list  *previous;

	cur = *begin_list;
	
	while (cur != NULL)
	{
		if(cmp((char *) cur->data, (char *)data_ref)==0)
		{	
			if (cur == *begin_list)
			{
				*begin_list = cur->next;
				free(cur);
			}
			else
			{
				previous = find_previous(begin_list, cur);
				previous->next = cur->next;

				//printf("previous = %p\n", previous);
				//printf("cur-next = %p\n", cur->next);
				//printf("pre-next = %p\n", previous->next);
				//printf("previous = %s\n", (char *)previous->data);
				//print_list(begin_list);
			}
		}
		cur = cur->next;
	}
}



int		main(void)
 {
 	char straa[] = "String aa";
 	t_list *aa = malloc(sizeof(t_list));
 	aa->next = 0;
 	aa->data = straa;

 	char strbb[] = "FX";
 	t_list *bb = malloc(sizeof(t_list));
 	bb->next = 0;
 	bb->data = strbb;

 	char strcc[] = "String cc";
 	t_list *cc = malloc(sizeof(t_list));
 	cc->next = 0;
 	cc->data = strcc;

 	char strdd[] = "String dd";
 	t_list *dd = malloc(sizeof(t_list));
 	dd->next = 0;
 	dd->data = strdd;

 	aa->next = bb;
 	bb->next = cc;
 	cc->next = dd;

 	t_list **begin_list = &aa;

 	print_list(begin_list);
	//find_previous(begin_list, aa);
	//find_previous(begin_list, bb);
	//find_previous(begin_list, cc);
	//find_previous(begin_list, dd);
 	
	printf("----------\n");
	ft_list_remove_if(begin_list, strbb, strcmp);
 	//ft_list_remove_if(begin_list, strdd, strcmp);
 	print_list(begin_list);


}

