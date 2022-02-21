/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:53:13 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/21 07:46:42 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0 || s1 == s2)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (p1[index] != p2[index])
			return (p1[index] - p2[index]);
		index++;
	}
	return (0);
}
