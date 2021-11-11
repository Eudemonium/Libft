/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:31:05 by jagagas           #+#    #+#             */
/*   Updated: 2021/11/11 07:35:32 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strdup(const char *s1);
char			*ft_strcat(char *s1, const char *s2);

int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);

int				ft_strlen(char *str);

void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char const *s);
void			ft_putendl_fd(char const *s, int fd);

char			*ft_itoa(int n);

unsigned int	ft_intlen(int n);
unsigned int	ft_pow(int base, int exponent);
int				ft_iswhitespace(char c);
#endif