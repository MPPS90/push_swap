/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:00:10 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/13 21:11:24 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char    print_character(unsigned int i, char character)
{
	printf("%u, %c\n", i, character);
	return (0);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;
	size_t			str_len;

	str_len = ft_strlen(s) + 1;
	new_str = (char *)ft_calloc(str_len, sizeof(char));
	if (s == NULL || new_str == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int main(void)
{
	char    *str;
	str = "holiwi";

	ft_strmapi(str, &print_character);
}*/
