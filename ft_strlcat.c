/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:18 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/03 19:08:36 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstsize_before;
	size_t	src_len;

	dstsize_before = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dstsize > 0 && dstsize >= dstsize_before + src_len + 1)
	{
		ft_strncat(dst, src, dstsize - dstsize_before - 1);
		dst[dstsize_before + src_len] = '\0';
	}
	return (dstsize_before + src_len);
}
