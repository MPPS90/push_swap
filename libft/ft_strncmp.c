/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:29:20 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:52:58 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((n - 1) > i && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
#include <stdio.h>

int main(void)
{   
     char *s1 = "Holas";
     char *s2 = "Holitasos";
     size_t n = 5;
     printf("%d\n", ft_strncmp(s1, s2, n));
     printf("%d\n", strncmp(s1, s2, n));
}*/
