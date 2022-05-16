/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:07:44 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/16 12:07:58 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *str, char sep)
{
	int words;
	int i;


	i = 0;
	words = 1;
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
	printf("nb words : %d", words);
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char **str;
	int	nbwords;

	nbwords = ft_countwords(s, c);
	str = malloc(sizeof(char*) * (nbwords));
	return (str);


}

int main (void)
{
    char test[] = ",,,,dss,, 123,,,";
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