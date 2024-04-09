/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:19:27 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:14:19 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main(void)
{
     char str[] = "Holaaa";//"Holaa"
     int c = 'm';
     printf("BEFORE: %s\n", str);"mmlaa"
     ft_memset(str, c,  2);
     printf("AFTER: %s\n", str);
     return (0);
}*/
