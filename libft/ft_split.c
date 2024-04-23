/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:58:00 by mpena-so          #+#    #+#             */
/*   Updated: 2023/11/14 16:38:03 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_strings(char *s, int c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || s[i] == '\0')
				counter++;
		}
	}
	return (counter);
}

static char	**free_memory(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (NULL);
}

static char	**fill(char *s, int c, char **box)
{
	int	i;
	int	start;
	int	box_positions;

	i = 0;
	box_positions = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				box[box_positions] = ft_substr(s, start, i - start);
				if (box[box_positions] == NULL)
					return (free_memory (box, box_positions));
				box_positions++;
			}
		}
	}
	return (box);
}

char	**ft_split(char const *s, char c)
{
	char	**box;
	int		num_strings;

	num_strings = counter_strings((char *)s, c);
	box = (char **)ft_calloc(num_strings + 1, sizeof(char *));
	if (box == NULL)
		return (NULL);
	box = fill((char *)s, c, box);
	return (box);
}

/* 
#include <stdio.h>
int main (void)
{
	char	**main_string;
	char	*s;
	char	c;
	int i;

	s = " hola  holiii  holiwi ";
	c = ' ';
	main_string = ft_split(s, c);
	i = 0;

	while (main_string[i])
	{
		printf("%s\n", main_string[i]);
		i++;
	}
} */
