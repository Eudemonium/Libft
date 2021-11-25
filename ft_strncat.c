/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:49:16 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/23 18:51:09 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	offset;

	index = 0;
	while (s1[index])
		index++;
	offset = index;
	while (n-- && s2[index - offset])
	{
		s1[index] = s2[index - offset];
		index++;
	}
	if (n > 0)
		s1[index] = '\0';
	return (s1);
}
