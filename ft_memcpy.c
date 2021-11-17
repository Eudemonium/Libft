/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:59:48 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/17 21:04:15 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	index = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		p_dst[index] = p_src[index];
		index++;
	}
	return (dst);
}
