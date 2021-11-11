/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 07:22:43 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/11 07:32:37 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	index;

	if (src == NULL)
		return (NULL);
	index = 0;
	while (src[index] && index < len)
	{
		dst[index] = src[index];
		index++;
		if (index == len - 1 && src[index])
			break ;
	}
	dst[index] = '\0';
	return (dst);
}
