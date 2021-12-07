/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:34:00 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/07 14:41:05 by jagagas          ###   ########.fr       */
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

static void	free_array(char **ptr, size_t len)
{
	while (len--)
	{
		free(ptr[len]);
		ptr[len] = NULL;
	}
	free(ptr);
	ptr = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	index;
	size_t	w_count;
	size_t	w_size;

	if (s == NULL)
		return (NULL);
	w_count = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * w_count + 1);
	if (!array)
		return (NULL);
	array[w_count] = 0;
	index = 0;
	while (index < w_count)
	{
		while (*s == c)
			s++;
		w_size = word_size(s, c);
		array[index] = ft_strnew(w_size);
		if (array[index] == NULL)
		{
			free_array(array, index);
			return (NULL);
		}
		ft_strncpy(array[index], s, w_size);
		s = s + w_size;
		index++;
	}
	return (array);
}