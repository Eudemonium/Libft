/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:50:54 by jagagas           #+#    #+#             */
/*   Updated: 2021/12/04 15:58:28 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H
# include <stdio.h>
# include <ctype.h>
# include <limits.h>
# include <stdlib.h>

//First Part
int	test_ft_memset(void);
int	test_ft_bzero(void);
int	test_ft_memccpy(void);
int	test_ft_strlen(void);
int	test_ft_strncpy(void);
int	test_ft_strcat(void);
int	test_ft_strchr(void);
int	test_ft_strrchr(void);
int	test_ft_atoi(void);
int	test_ft_isalpha(void);
int	test_ft_isdigit(void);
int	test_ft_isalnum(void);
int	test_ft_isascii(void);
int	test_ft_isprint(void);
int	test_ft_toupper(void);
int	test_ft_tolower(void);

//Second Part
int	test_ft_memalloc(void);
int	test_ft_itoa(void);

#endif