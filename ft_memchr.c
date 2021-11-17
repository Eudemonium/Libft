/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:25:19 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/17 21:07:53 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			count;

	ptr_s = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (ptr_s[0] == c)
		{
			return (ptr_s);
		}
		count++;
		ptr_s++;
	}
	return (NULL);
}
