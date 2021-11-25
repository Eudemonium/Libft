/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:59:48 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/22 21:00:17 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	if (dst == NULL && src == NULL)
		return (dst);
	p_dst = (char *)dst;
	p_src = (const char *)src;
	while (n--)
		*p_dst++ = (unsigned char)*p_src++;
	return (dst);
}
