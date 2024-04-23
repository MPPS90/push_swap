/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:40:58 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:09:00 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;

	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dest;
	if (aux1 == NULL && aux2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		aux2[i] = aux1[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[10] = "";
	char	str2[] = "hola";

	char	*res;
	char	*res2;

	res = memcpy(str1, str2, 5);
	res2 = ft_memcpy(str1, str2, 5);
	printf("MEMCPY ORIGINAL: [%s] MY MEMCPY: [%s]\n", res, res2);
	return (0);
}*/
