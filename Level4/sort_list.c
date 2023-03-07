//
//  sort_list.c
//  
//
//  Created by Marc-Antoine Coindreau on 05/03/2023.
//
#include <stdio.h>
typedef struct s_list t_list;

struct s_list
{
    int data;
    t_list *next;
    
    
};

int ascending(int a, int b);
t_list *sort_list(t_list *lst, int (*cmp)(int,int));


t_list *sort_list(t_list *lst, int (*cmp)(int,int))
{
    
    t_list *cur;
    int temp;
    int flag;
    
    flag = 0;
    while (flag == 0)
    {
        cur = lst;
        flag = 1;
        while(cur->next != NULL)
        {
            if (cmp(cur->data, cur->next->data) == 0)
            {
                temp = cur->data;
                cur->data = cur->next->data;
                cur->next->data = temp;
                flag = 0;
            }
            else
            {
                cur = cur->next;
            }
        }
    }
    
    
    return lst;
}


int ascending(int a, int b)
{
    
    return (a <= b);
    
}

int main()
{
    
    t_list e1;
    e1.data = 2142243;
    t_list e2;
    e2.data = -2143466;
    t_list e3;
    e3.data = 999999;
    t_list e4;
    e4.data = -343;
    t_list e5;
    e5.data = -343;
    t_list e6;
    e6.data = 500;
   
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
        
        printf("(%d)[%p] data = %d next = %p\n", i, cur, cur->data, cur->next);
        
        cur = cur->next;
        i++;
    }
    
    
    
    printf("\n-----------\n");
    
    
    i = 0;
    cur = sort_list(&e1, ascending);
    while(cur != NULL)
    {
        
        printf("(%d)[%p] data = %d next = %p\n", i, cur, cur->data, cur->next);
        
        cur = cur->next;
        i++;
    }
    
    return 0;
}
