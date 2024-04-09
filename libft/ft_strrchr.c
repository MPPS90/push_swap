/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:25:48 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:57:16 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{   
     char *str = "Hola jajaja";
     char c = 'j';
     printf("%s\n", ft_strrchr(str, c));
     printf("%s\n", strrchr(str, c));
     printf("%lu", strlen(str));
	 return 0;
}*/
