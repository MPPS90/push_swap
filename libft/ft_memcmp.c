/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:26:33 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:03:00 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux1[i] != aux2[i])
		{
			return (aux1[i] - aux2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "Holas";
	char	*s2 = "Holitasos";
	size_t	n = 4;

	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
}*/
