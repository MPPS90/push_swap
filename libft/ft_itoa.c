/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:59:44 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/05 19:01:32 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	digit_count(int n)
{
	int				i;
	unsigned int	aux;

	aux = n;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		aux = n * -1;
		i++;
	}
	while (aux > 0)
	{
		aux = aux / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*new_str;
	int				len_newstr;
	unsigned int	aux;

	aux = (unsigned int)n;
	len_newstr = digit_count(n);
	new_str = (char *)ft_calloc((len_newstr + 1), sizeof(char));
	if (new_str == NULL)
		return (NULL);
	if (n == 0)
		new_str[0] = '0';
	if (n < 0)
	{
		new_str[0] = '-';
		aux = n * -1;
	}
	while (aux > 0)
	{
		new_str[len_newstr - 1] = (aux % 10) + 48;
		len_newstr--;
		aux = aux / 10;
	}
	return (new_str);
}
/*
#include <stdio.h>
#include <limits.h>

int main() {
	char *new_str;
	int n;
	
	n = 1234;
	new_str = ft_itoa(n);
	printf("%s", new_str);
}*/