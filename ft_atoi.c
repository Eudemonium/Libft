/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:15:51 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/10 17:37:18 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	num;
	int	sign;

	index = 0;
	while (str[index] && ft_iswhitespace(str[index]))
	{
		index++;
	}
	sign = 1;
	if (str[index] == '-' || str[index] == '+')
	{
		sign = (str[index++] == '-') * -2 + 1;
	}
	num = 0;
	while (str[index] && ft_isdigit(str[index]))
	{
		num = num * 10 + (str[index] - '0');
		index++;
	}
	return (num * sign);
}
