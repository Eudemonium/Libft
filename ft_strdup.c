/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:38:35 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/17 21:08:55 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (s1 == NULL)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strcpy(s2, (char *)s1);
	return (s2);
}
