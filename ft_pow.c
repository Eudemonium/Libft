/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:44:42 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/17 19:29:58 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_pow(int base, unsigned int exponent)
{
	if (exponent == 0 || base == 1)
		return (1);
	return (base * ft_pow(base, exponent - 1));
}
