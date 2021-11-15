/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:31:51 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/15 10:58:04 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = ft_strchr(s, '\0');
	while (ptr != s && ptr[0] != (char)c)
	{
		ptr--;
	}
	if (ptr[0] == c)
		return (ptr);
	return (NULL);
}
