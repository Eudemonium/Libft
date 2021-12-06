/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:29:44 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 16:39:22 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	index;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen((char *)s);
	str = ft_strnew(size);
	if (str != NULL)
	{
		index = 0;
		while (index < size)
		{
			str[index] = f(index, s[index]);
			index++;
		}
	}
	return (str);
}
