/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:10:31 by MP9               #+#    #+#             */
/*   Updated: 2025/07/24 18:04:38 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_pointer(void *ptr)
{
	int	out;
	int	bytes_written;

	out = ft_putstr("0x");
	if (!ptr)
	{
		bytes_written = write(1, "0", 1);
		if (bytes_written == -1)
			return (-1);
		return (out + bytes_written);
	}
	bytes_written = ft_putnbr_hex((unsigned long)ptr, 0);
	if (bytes_written == -1)
		return (-1);
	return (out + bytes_written);
}

static int	format_specifier(const char *f, int i, va_list args)
{
	char	c;

	c = f[i];
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 1));
	if (c == 'p')
		return (convert_pointer(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		count;
	int		prot;

	count = 0;
	va_start(args, f);
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			prot = format_specifier(f, 0, args);
		}
		else
		{
			if (write(1, f, 1) == -1)
				return (va_end(args), -1);
		}
		count += prot;
		f++;
	}
	return (va_end(args), count);
}
