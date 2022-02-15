/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:35:31 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/15 16:53:31 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	index;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	str = ft_strnew(size);
	if (str != NULL)
	{
		index = 0;
		while (index < size)
		{
			str[index] = f(s[index]);
			index++;
		}
	}
	return (str);
}
