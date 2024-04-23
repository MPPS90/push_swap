/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:42:46 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 16:36:24 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		result;
	long	n_long;

	n_long = (long)n;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long = n_long * -1;
	}
	if (n_long > 9)
	{
		ft_putnbr_fd(n_long / 10, fd);
	}
	result = n_long % 10 + 48;
	write(fd, &result, 1);
}

/*
#include <stdio.h>
int main(void)
{
	int number = -45667;
	int fd = 1;

	ft_putnbr_fd(number, fd);
}*/
