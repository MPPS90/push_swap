/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:16:14 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/12 18:32:03 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;

	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dst;
	i = 0;
	if (aux1 == NULL && aux2 == NULL)
		return (NULL);
	if (aux1 < aux2 && aux1 + len >= aux2)
	{
		i = len -1;
		while (i < len)
		{
			aux2[i] = aux1[i];
			i--;
		}
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
    char str[8] = "Hello"; 
    char *dest = str + 2;
    str[7] ='\0';
    
    char str2[8] = "Hello"; 
    char *dest2 = str2 + 2;
    str2[7] ='\0';
 
    char *res = 0;
    char *res2 = 0;
    
    res2 = ft_memmove(dest, str,  5);
    printf("MY MEMMOVE:STR[%s] DEST[%s]\n", str,  res2); 
    res = memmove(dest2, str2,  5);
    printf("MEMMOVE ORIGINAL: [%s]\n", res);
    return (0);
}*/
