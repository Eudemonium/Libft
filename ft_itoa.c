/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:10:14 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/06 22:44:23 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		index;
	int		place;

	len = ft_intlen(n);
	str = ft_strnew(len);
	if (str)
	{
		index = 0;
		if (n < 0)
			str[index++] = '-';
		else
			n = -n;
		len--;
		while (index <= len)
		{
			place = -n / ft_pow(10, len - index);
			str[index] = '0' + place;
			n = n + (place * ft_pow(10, len - index));
			index++;
		}
	}
	return (str);
}
