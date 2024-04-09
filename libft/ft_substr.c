/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:54:22 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 22:25:26 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_s == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_s[i++] = s[start++];
	}
	sub_s[i] = '\0';
	return (sub_s);
}
//#include <stdio.h>
//  int main(void)
// {
// 	char *str;
// 	size_t len;
// 	unsigned int start;

// 	str = "hola holaa";
// 	start = 6;
// 	len = 3;

// 	printf("SUBSTR: %s\n", ft_substr(str, 6, 3));
// 	return 0;
// } 
