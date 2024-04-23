/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:19:27 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 23:06:19 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t size)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = (unsigned char *) dst;
	while (i < size)
	{
		aux[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Holaaa";
	printf("BEFORE: %s\n", str);
	ft_bzero(str, 2);
	printf("AFTER: %s\n", str);
	return (0);
}*/
