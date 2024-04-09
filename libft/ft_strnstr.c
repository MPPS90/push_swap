/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:58:57 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:54:55 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		if (*needle == haystack[i])
		{
			while (haystack[i + j] && needle[j] && needle[j] == haystack[i + j]
				&& (i + j) < n)
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{   
	char *s1 = "Hol hhhhhhola 123hoa";
	char *s2 = "hola";
	size_t n = 20;
	printf("%s\n", ft_strnstr(s1, s2, n));
	printf("%s\n", strnstr(s1, s2, n));
	return  0;
}*/