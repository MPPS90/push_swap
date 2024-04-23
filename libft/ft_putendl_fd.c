/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:14:29 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/03 19:30:39 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

/*
#include <stdio.h>
int main(void)
{
	char *s;
	int	fd;

	s = "holiwi";
	fd = 1;
	ft_putendl_fd(s, fd);
}*/
