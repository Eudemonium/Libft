/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:49:16 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/17 21:09:37 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	index;
	size_t	offset;

	index = 0;
	offset = 0;
	while (s1[index])
	{
		index++;
		offset--;
	}
	while (index + offset < n)
	{
		s1[index] = s2[index + offset];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
