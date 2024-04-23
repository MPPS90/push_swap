/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:12:09 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/15 00:02:24 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* 
#include <stdio.h>
int main(void)
{
	char character = '7';

	int value = ft_isalnum(character);

	printf("%d\n", value);
	return 0;
}
 */