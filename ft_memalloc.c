/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:54:13 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/20 22:04:52 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*ptr;
	size_t	index;

	mem = (void *)malloc(size);
	if (mem == NULL)
		return (NULL);
	ptr = mem;
	index = 0;
	while (index < size)
	{
		ptr[index] = 0;
		index++;
	}
	return (mem);
}
