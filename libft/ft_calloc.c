/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:41:47 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 23:42:29 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_bzero(memory, (nmemb * size));
	return (memory);
}

/*
#include <stdio.h>
int	main(void)
 {
 	char *str = calloc(5, sizeof(char));
    free(str);
	return (0);
}*/
