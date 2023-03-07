#include <stdio.h>


typedef struct s_list t_list;

struct s_list
{
    void *data;
    t_list *next;
};


void function(void *data)
{
    char *tmp;
    
    tmp = (char *) data;
    
    printf("Mot : %s\n", tmp);
    
}


void ft_list_foreach(t_list *lst, void (*f)(void *data))
{
 
    t_list *cur;
    
    cur = lst;
    
    while(cur != NULL)
    {
        f(cur->data);
        cur = cur->next;
    }
    
    
}



int main ()
{
    
    
    t_list e1;
    e1.data = "Hello";
    t_list e2;
    e2.data = " ";
    t_list e3;
    e3.data = "World";
    t_list e4;
    e4.data = "!!!!";
    t_list e5;
    e5.data = "comment";
    t_list e6;
    e6.data = "va";
   
    //function(e6.data);
    
    
    e1.next = &e2;
    e2.next = &e3;
    e3.next = &e4;
    e4.next = &e5;
    e5.next = &e6;
    e6.next = NULL;
    
    int i = 0;
    t_list *cur;
    
    cur = &e1;
    while(cur != NULL)
    {
        printf("(%d)[%p] data = '%s' next = %p\n", i, cur, (char *)cur->data, cur->next);
        cur = cur->next;
        i++;
    }
    
    
    
    printf("\n-----------\n");
    
    ft_list_foreach(&e1, function);
    
    /*
    i = 0;
    cur = sort_list(&e1, ascending);
    while(cur != NULL)
    {
        
        printf("(%d)[%p] data = %d next = %p\n", i, cur, cur->data, cur->next);
        
        cur = cur->next;
        i++;
    }
    
    */
    
    
    return 0;
}

