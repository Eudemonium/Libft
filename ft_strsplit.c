/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:34:00 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/08 12:17:04 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	word_count(char const *s, char delim)
{
	size_t	count;
	int		word;

	count = 0;
	while (*s)
	{
		if (*s == delim)
			word = 0;
		else
		{
			if (word == 0)
			{
				count++;
				word = 1;
			}
		}
		s++;
	}
	return (count);
}

static size_t	word_size(char const *s, char token)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr && *ptr != token)
		ptr++;
	return (ptr - s);
}

static void	*free_array(char **ptr, size_t len)
{
	while (len--)
	{
		free(ptr[len]);
		ptr[len] = NULL;
	}
	free(ptr);
	ptr = NULL;
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	index;

	if (s == NULL)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * word_count(s, c) + 1);
	if (!array)
		return (NULL);
	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			array[index] = ft_strnew(word_size(s, c));
			if (array[index] == NULL)
				return (free_array(array, index));
			ft_strccpy(array[index], s, c);
			s = s + ft_strlen(array[index++]);
		}
	}
	array[index] = 0;
	return (array);
}
