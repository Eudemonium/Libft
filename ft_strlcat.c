/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:18 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/29 17:03:58 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstsize_before;

	dstsize_before = ft_strlen(dst);
	if (dstsize > 0)
		ft_strncat(dst, src, dstsize - dstsize_before - 1);
	return (dstsize_before + ft_strlen((char *)src));
}
