/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:05:08 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/24 15:44:41 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while((*lst) != NULL)
    {
        tmp = (*lst)->next;
        ft_lstdelone((*lst), del); // utillise tmp car je free lst donc il ne trouvera plus next apres le free
        *lst = tmp;
    }
    *lst = NULL;
}
