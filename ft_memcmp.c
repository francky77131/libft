/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:18:31 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/10 11:18:33 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char  *str1;
    char  *str2;

    i = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    if (n <= 0)
        return (0);
    while (str1[i] == str2[i] && i < n)
        i++;
    return (str1[i] - str2[i]);
}