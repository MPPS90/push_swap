/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:13:33 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 20:19:35 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int	start;
	int	end;

	if (str == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (str[start] != '\0' && ft_strchr((char *)set, (char)str[start]))
	{
		start++;
	}
	end = ft_strlen(str) - 1;
	while ((end > start) && ft_strchr((char *)set, (char) str[end]))
	{
		end--;
	}
	return (ft_substr(str, start, (end - start + 1)));
}
/*#include <stdio.h>
int main(void)
{
    char *str;
    char *set;
    int c;

    str = "iuholau";
    set = "hwiu";
    c = '\0';
	printf("%s\n", ft_strtrim(str, set));
    return(0);
}*/
