/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:02:05 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 21:20:41 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	aux;

	aux = c;
	while (*s != '\0' && ((unsigned int)*s) != aux)
		s++;
	if (aux != ((unsigned int)*s))
		return (NULL);
	return ((char *)s);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "teste";
	int c = 'e';
   
	char *resultado = ft_strchr(str, c);
	printf("%s\n", resultado);
}*/
