/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:10:24 by MP9               #+#    #+#             */
/*   Updated: 2025/07/24 14:10:26 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *f, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
size_t	ft_strlen(const char *s);

int		ft_putnbr_hex(unsigned long n, int uppercase);
int		ft_printf(const char *f, ...);
int		count_digits(int n);
int		count_digits_unsigned(unsigned int n);
int		ft_putnbr_unsigned(unsigned int n);

#endif
