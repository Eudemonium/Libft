/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:23:26 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/22 11:48:23 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = dst;
	p_src = src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			p_dst[len] = p_src[len];
	}
	return (dst);
}
