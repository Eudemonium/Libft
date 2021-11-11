/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:18 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/11 11:27:58 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	ft_strncpy(dst, src, dstsize);
	return (dstsize + index);
}
