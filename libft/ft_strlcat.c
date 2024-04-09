/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:45:41 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 22:53:01 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;
	size_t	dst_length;

	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length >= dstsize || dstsize == 0)
		return (src_length + dstsize);
	while (src[i] != '\0' && i < dstsize - dst_length - 1)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}

/*
#include <stdio.h>
int main(void)
{   
     char s1[15] = "asjkp12";
     const char *s2 = "123456789";
     size_t n = 400;    
     printf("%lu\n", ft_strlcat(s1, s2, n));
	 printf("%lu\n", strlcat(s1, s2, n));
     return 0;
}*/
