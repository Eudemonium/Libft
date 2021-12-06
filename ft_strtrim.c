/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:49:48 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 21:31:32 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*end;
	size_t	len;

	if (s == NULL)
		return (NULL);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	end = ft_strchr(s, '\0');
	end--;
	while (*end && end != s && (*end == ' ' || *end == '\n' || *end == '\t'))
		end--;
	len = end - s;
	str = ft_strnew(len + 1);
	if (str != NULL)
		str = ft_strncpy(str, s, len + 1);
	return (str);
}
