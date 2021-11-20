/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 09:59:48 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/20 23:57:29 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	if (dst == NULL && src == NULL)
		return (dst);
	p_dst = dst;
	p_src = src;
	while (n--)
		*p_dst++ = *p_src++;
	return (dst);
}
