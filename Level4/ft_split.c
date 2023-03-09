#include <stdio.h>
#include <stdlib.h>

int check_separator (char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int i;
    int count;
    int inside = 0;

    count = 0;
    inside = 0;
    i = 0;    
    while (str[i] != '\0')
    {
        if (check_separator(str[i]) == 0 && inside == 0)
        {
            inside = 1;
            count++;
        }
        if (check_separator(str[i]) == 1)
        {
            inside = 0;
        }
        i++;
    }
    return count;
}

int size_word(char *str, int ind)
{
    int size = 0;
    if (check_separator(str[ind]) == 1)
        return 0;
    while (check_separator(str[ind]) == 0 && str[ind] != '\0')
    {
        size++;
        ind++;
    }
    return size;
}

char *cpy_wd(char *str, int size_wd)
{
    int i;

    char *result = malloc (sizeof(char)* (size_wd + 1));
    if (result == NULL)
        return NULL;
    i = 0;
    while (i < size_wd)
    {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return result;
}

char    **ft_split(char *str)
{
    char **tab_char;
    int nbr_wd;
    int i;
    int i_wd;
    int size_wd;

    nbr_wd = count_words(str);

    tab_char = malloc(sizeof(char *) * (nbr_wd + 1));
    if (tab_char == NULL)
    {
        return NULL;
    }
    i = 0;
    i_wd = 0;
    while (str[i] != '\0')
    {
        if (check_separator(str[i]) == 1)
        {
            i++;
        }
        else
        {
            size_wd = size_word(str, i);
            tab_char[i_wd] = cpy_wd(&str[i], size_wd);
            i += size_wd;
            i_wd +=1;
        }
    }
    tab_char[i_wd] = NULL;
    return tab_char;   
}

int main (void)
{
    char *str = "    premier \n\n\n\n deuxieme troisieme  \t\t quatrieme   ";
    
    char **tab = ft_split(str);
    int i = 0;
    while (tab[i])
    {
        printf("Result %d = %s\n", i, tab[i]);
        i++;
    }
    
    return 0;
}





