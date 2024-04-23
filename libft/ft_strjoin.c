/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:24:26 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:42:45 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		add_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	add_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(add_len * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i++] = s2[j++];
	}
	s3[i] = '\0';
	return (s3);
}

/*
#include <stdio.h>
int main (void)
{
	const char str1[] ="hola";
	const char str2[] ="tu";
	printf("NEW STR: %s\n", ft_strjoin(str1, str2));
}*/
