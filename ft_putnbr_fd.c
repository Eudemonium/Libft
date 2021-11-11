/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:10:38 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/08 12:13:56 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
	}
	else
	{
		n = -n;
	}
	if (n > -10)
	{
		ft_putchar_fd('0' - n, fd);
	}
	else
	{
		ft_putnbr_fd(n / -10, fd);
		ft_putchar_fd('0' - n % 10, fd);
	}
}
