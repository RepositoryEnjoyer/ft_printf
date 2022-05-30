/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:55:46 by cmaurici          #+#    #+#             */
/*   Updated: 2022/05/30 13:20:45 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *stuff, ...);
int		ft_checker(char const *str, va_list things, int i);
int		ft_putchar(int c);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_puthexmin(unsigned long long nb);
int		ft_putnbr(int nb);
int		ft_putten(unsigned int nb);
int		ft_puthexmayus(unsigned long long nb);

#endif