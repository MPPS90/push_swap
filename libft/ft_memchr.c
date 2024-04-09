/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:56:02 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 20:58:37 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[6] = "hola";
	int		c = 'l';
	char	*result = 0;
	char	*result2 = 0;

	result = memchr(str, c, 3);
	printf("%s\n", result);
	result2 = ft_memchr(str, c, 3);
	printf("%s\n", result2);
	return (0);
}*/
