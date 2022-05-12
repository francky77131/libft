/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:28:03 by frgojard          #+#    #+#             */
/*   Updated: 2022/05/12 11:55:07 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	//---------------- ft_strncmp ----------------//
	printf("ft_strncmp : %d\n", ft_strncmp("Aa", "aa", 2));
	printf("strncmp : %d\n", strncmp("Aa", "aa", 2));
	//---------------- ft_strlen ----------------//
	printf("ft_strlen : %ld\n", ft_strlen("Salut ca va ?"));
	printf("strlen : %lu\n", strlen("Salut ca va ?"));
	//---------------- ft_isalpha ----------------//
	printf("ft_isalpha : %d\n", ft_isalpha('a'));
	printf("isalpha : %d\n", isalpha('a'));
	//---------------- ft_isdigit ----------------//
	printf("ft_isdigit : %d\n", ft_isdigit('4'));
	printf("isdigit : %d\n", isdigit('4'));
	//---------------- ft_isalnum ----------------//
	printf("ft_isalnum : %d\n", ft_isalnum('a'));
	printf("isalnum : %d\n", isalnum('a'));
	//---------------- ft_isascii ----------------//
	printf("ft_isascii : %d\n", ft_isascii('a'));
	printf("isascii : %d\n", isascii('a'));
	//---------------- ft_isprint ----------------//
	printf("ft_isprint : %d\n", ft_isprint(127));
	printf("isprint : %d\n", isprint(127));
	//---------------- ft_toupper ----------------//
	printf("ft_toupper : %d\n", ft_toupper('B'));
	printf("toupper : %d\n", toupper('B'));
	//---------------- ft_tolower ----------------//
	printf("ft_tolower : %d\n", ft_tolower('B'));
	printf("tolower : %d\n", tolower('B'));
	//---------------- ft_atoi ----------------//
	printf("ft_atoi : %d\n", ft_atoi("   -1234ac"));
	printf("atoi : %d\n", atoi("   -1234ac"));
	printf("ft_atoi : %d\n", ft_atoi("   1234ac"));
	printf("atoi : %d\n", atoi("   1234ac"));
		//---------------- ft_strchr ----------------//
	printf("ft_strchr : %s\n", ft_strchr("salut ca va ?", 0));
	printf("strchr : %s\n", strchr("salut ca va ?", 0));
	//---------------- ft_strrchr ----------------//
	printf("ft_strrchr : %s\n", ft_strrchr("salut ca va ?", 'a'));
	printf("strrchr : %s\n", strrchr("salut ca va ?", 'a'));
	//---------------- ft_memset ----------------//
	char str[] = "salut ca va ?";
	ft_memset(str, 48, 5);
	printf("ft_memset : %s\n", str);
	char str2[] = "salut ca va ?";
	memset(str2, 48, 5);
	printf("memset : %s\n", str2);
	//---------------- ft_bzero ----------------//
	char strbz[] = "salut ca va ?";
	ft_bzero(strbz, 5);
	printf("ft_bzero : %s\n", strbz);
	char strbz2[] = "salut ca va ?";
	bzero(strbz2, 5);
	printf("bzero : %s\n", strbz2);
	//---------------- ft_memcpy ----------------//
	char destmemcpy4[] = "Salut ca va ?";
	char srcmemcpy5[] = "Wesh !";
	ft_memcpy(destmemcpy4, srcmemcpy5, 6);
	printf("memcpy : %s\n", destmemcpy4);
	char destmemcpy2[] = "Salut ca va ?";
	char srcmemcpy3[] = "Wesh !";
	memcpy(destmemcpy2, srcmemcpy3, 6);
	printf("memcpy : %s\n", destmemcpy2);
	//---------------- ft_memcpy ----------------//
	char destmemmove[] = "Salut ca va ?";
	char srcmemmove[] = "Wesh !";
	memmove(destmemmove, srcmemmove, 4);
	printf("memmove : %s\n", destmemmove);
	char destmemmove1[] = "Salut ca va ?";
	char srcmemmove1[] = "Wesh !";
	ft_memmove(destmemmove1, srcmemmove1, 4);
	printf("ft_memmove : %s\n", destmemmove1);
	//---------------- ft_strlcpy ----------------//
	char	destl[] = "salut ca va ?";
	char	srcl[] = "sal";
	printf("strlcpy : %ld\n", ft_strlcpy(destl, srcl, 3));
	//---------------- ft_memcmp ----------------//
	printf("ft_memcmp : %d\n", ft_memcmp("aaax", "aaz", 3));
	printf("memcmp : %d\n", memcmp("aax", "aaz", 3));
	//---------------- ft_strlcat ----------------//
	char	destlcat[] = "salut ca va ?";
	char	srclcat[] = "oui et toi ?";
	printf("strlcat : %ld\n", ft_strlcat(destlcat, srclcat, 3));
	//---------------- ft_memchr ----------------//
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("tab %s\n", (char *)ft_memchr(tab, -1, 7));
	printf("ft_memchr : %p\n", ft_memchr("bonjour", 'o', 3));
	printf("memchr : %p\n", memchr("bonjour", 'o', 3));
	//---------------- ft_strnstr ----------------//
	printf("ft_strnstr : %s\n", ft_strnstr("abajas", "aj", 4));
	//printf("strnstr : %s\n", strnstr("abajas", "aj", 4));
	//---------------- ft_strdup ----------------//
	printf("ft_strdup : %s\n", ft_strdup("aaax"));
	printf("strdup : %s\n", strdup("aaax"));
	//---------------- ft_calloc ----------------//
	printf("ft_calloc : %p\n", ft_calloc(5, 5));
	printf("calloc : %p\n", calloc(5, 5));
	//---------------- ft_substr ----------------//
	printf("ft_strdup : %s\n", ft_substr("tripouille", 1, 1));
	//---------------- ft_strjoin ----------------//
	printf("ft_strjoin : %s\n", ft_strjoin("Salut ca va ? ", "Non et ferme la merci"));
	//---------------- ft_strtrim ----------------//
	printf("ft_strtrim : %s\n", ft_strtrim("ABCDAEAB", "AB"));
}
