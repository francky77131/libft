/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:47:01 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/12 11:47:33 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int start;
    int end;
    char    *str;

    i = 0;
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_check(s1[start], set))
        start++;
    while (end > start && ft_check(s1[end - 1], set))
        end--;
    str = malloc(sizeof(char) * (end - start + 1));
    if (!str)
        return (NULL);
    while(start < end)
    {
        str[i] = s1[start];
        start++;
        i++;
    }
    str[i] = 0;
    return (str);
}