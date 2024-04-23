/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:49:34 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:42:02 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return (j);
	}
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s2[20]; //dst
	char	s1[] = "holaaaaa";  //src
	char	s4[20]; //dst
	char	s3[] = "holaaaaa"; //src
	size_t n = 7; 
	printf("%zu\n", ft_strlcpy(s2, s1, n));
	printf("%ld\n", strlcpy(s4, s3, n));
}*/
