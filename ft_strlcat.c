/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:18:20 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/10 11:45:24 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat ( char *dst , const char *src , size_t size )
{
    size_t i;
    size_t j;
    size_t len;

    i = 0;
    j = 0;
    len = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (size <= i)
        j = j + size;
    else
        j = j + i;
    while (src[len] && i + 1 < size)
    {
        dst[i] = src[len];
        i++;
        len++;
    }
    dst[i] = '\0';
    return (j);
}