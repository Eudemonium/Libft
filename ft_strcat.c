/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 07:34:08 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/11 07:48:18 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	index;
	int offset;

	index = 0;
	offset = 0;
	while (s1[index])
	{
		index++;
		offset--;
	}
	while (s2[index + offset])
	{
		s1[index] = s2[index + offset];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
