/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:07:44 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/16 17:51:46 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char sep)
{
	int words;
	int i;


	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		else
		{
			words++;
			while(str[i] != 0 && str[i] != sep)
				i++;
		}
	}
	printf("nb words : %d\n", words);
	return (words);
}

static int	*ft_countchar(const char *str, char sep, int *tab)
{
	int nbchr;
	int i;

	i = 0;
	nbchr = 0;
	while (str[i])
	{
		if (str[i] == sep)
		{
			i++;
			if (nbchr > 0)
			{
				*tab = nbchr;
				++tab;
			}
			nbchr = 0;
		}
		else
		{
			while(str[i] && str[i] != sep)
			{
				i++;
				nbchr++;
			}
		}
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char **str;
	int	nbwords;
	int	i;
	int j;
	int *tab;

	i = 0;
	j = 0;
	nbwords = ft_countwords(s, c);

	str = malloc(sizeof(char*) * (nbwords));
	if (!str)
		return (NULL);
	tab = malloc(sizeof(int*) * nbwords);
	if (!tab)
		return(NULL);
	ft_countchar(s, c, tab);
	while (i < nbwords)
	{
		while (s[j] == c)
			j++;
		str[i] = ft_substr(s, j, tab[i]);
		str[i][tab[i]] = 0;
		while (s[j] != c)
			j++;
		i++;
	}
	str[i] = 0;
	free(tab);
	return (str);
}

int main (void)
{
    char test[] = ",,,,dsss,, 1234,,567,";
    char *str = strdup(test);
     
    char **result = ft_split(str, ',');
     
    int i = 0;
    while (result[i])
    {
        printf("%s\n",result[i]);
        free(result[i]);
        i++;
	}
    free(result);
	free(str);
}