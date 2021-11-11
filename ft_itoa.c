/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:10:14 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/10 14:58:27 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*init_numstr(int num, int len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		index;
	int		place;

	len = ft_intlen(n);
	str = init_numstr(n, len);
	if (str == NULL)
		return (NULL);
	index = 0;
	if (n < 0)
	{
		str[index] = '-';
		n = -n;
		index++;
	}
	len--;
	while (index <= len)
	{
		place = n / ft_pow(10, len - index);
		str[index] = '0' + place;
		n = n - (place * ft_pow(10, len - index));
		index++;
	}
	return (str);
}
