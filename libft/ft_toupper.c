/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:23:17 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 22:07:51 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	int	c;

	c = '*';
	printf("%d", ft_toupper(c));
	return (c);
}*/
