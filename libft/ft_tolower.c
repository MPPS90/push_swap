/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:12:06 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 22:04:29 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	int	c;

	c = 'm';
	printf("%d", ft_tolower(c));
	return (c);
}*/
