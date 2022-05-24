/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:31:50 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/24 09:21:50 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if (*lst == NULL) // si *lst pointe sur nul 
    {                 // alors  
        *lst = new;   // *lst pointera sur new qui deviendra bien le dernier/premier element.
    }
    else                //sinon
    {
        tmp = ft_lstlast(*lst); // avec tmp je parcour ma liste en appelant lstlast.
        tmp->next = new;        // puis tmp ce retrouve a pointer mon dernier maillon je lui dit donc que le next de ce maillon est egale a mon noiveau maillon new.
    }        
}
