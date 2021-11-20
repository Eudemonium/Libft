/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:09:56 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/20 14:34:20 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_intlen(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		length++;
	}
	else
		n = -n;
	while (n != 0)
	{
		n = n / -10;
		length++;
	}
	return (length);
}
