/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:10:31 by MP9               #+#    #+#             */
/*   Updated: 2025/07/24 15:14:21 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_pointer(void *ptr)
{
	unsigned long	addr;
	int				count;
	int				prot;

	prot = write(1, "0x0", 3);
	if (prot == -1 || !ptr)
		return (prot);
	addr = (unsigned long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_hex(addr, 0);
	return (count);
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
			prot = write(1, f, 1);
		if (prot == -1)
			return (-1);
		count += prot;
		f++;
	}
	va_end(args);
	return (count);
}
