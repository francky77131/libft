#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newcontent;

    newcontent = malloc(sizeof(newcontent));
    if (newcontent = NULL)
        return (NULL);
    newcontent->content = content;
    newcontent->next = NULL;
    return (newcontent);
}
