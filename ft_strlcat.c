/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:18 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/07 11:45:50 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (*dst && dstsize)
	{
		dst++;
		dstsize--;
	}
	while (*src)
	{
		if (dstsize > 1)
		{
			*dst++ = *src;
			dstsize--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
