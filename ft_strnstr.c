/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:40:26 by jagagas           #+#    #+#             */
/*   Updated: 2022/02/18 17:10:25 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_index;
	size_t	n_index;

	if (needle[0] == '\0')
		return ((char *)haystack);
	h_index = 0;
	while (h_index < len && haystack[h_index] != '\0')
	{
		if (haystack[h_index] == needle[0])
		{
			n_index = 0;
			while (needle[n_index] && haystack[h_index + n_index]
				&& h_index + n_index <= len)
			{
				if (haystack[h_index + n_index] != needle[n_index])
					break ;
				n_index++;
			}
			if (needle[n_index] == '\0')
				return ((char *)&haystack[h_index]);
		}
		h_index++;
	}
	return (NULL);
}
