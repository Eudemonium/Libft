/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:14:18 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 17:22:49 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*p_str;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	str = ft_strnew(s1_len + s2_len);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s1, s1_len);
	p_str = str;
	while (s1_len--)
		p_str++;
	ft_strncpy(p_str, s2, s2_len);
	return (str);
}
