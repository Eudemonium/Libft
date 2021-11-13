/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:25:19 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/13 14:55:05 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			index;

	ptr_s = s;
	while (index < n)
	{
		if (ptr_s[index] == c)
		{
			return (ptr_s[index]);
		}
		index++;
	}
	return (NULL);
}
