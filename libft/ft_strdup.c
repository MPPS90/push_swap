/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:40:33 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:28:22 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	len_char;

	len_char = ft_strlen(s);
	s_copy = malloc((len_char + 1) * sizeof(char));
	if (s == NULL || s_copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s_copy, s, (len_char + 1));
	return (s_copy);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "holaaaaa";
	char	*s_copy = " ";
	
	printf("ORIGINAL: %s\n", strdup("hhhhhhhhhhhhhhh"));
	printf("ORIGINAL: %s\n", strdup(""));
	printf("ORIGINAL: %s\n", strdup("\0"));
	printf("MY: %s\n", ft_strdup("hhhhhhhhhhhhhhh"));
	printf("MY: %s\n", ft_strdup(""));
	printf("MY: %s\n", ft_strdup("\0"));
}*/