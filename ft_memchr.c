/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:25:19 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/21 08:25:32 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			index;

	ptr_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ptr_s[index] == (unsigned char)c)
		{
			return (&ptr_s[index]);
		}
		index++;
	}
	return (NULL);
}
