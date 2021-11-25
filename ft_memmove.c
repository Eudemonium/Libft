/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 10:23:26 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/22 20:58:17 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst < src)
		return (ft_memcpy(p_dst, p_src, len));
	while (len)
	{
		len--;
		p_dst[len] = p_src[len];
	}
	return (dst);
}
