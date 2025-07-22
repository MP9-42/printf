/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:02:51 by MP9               #+#    #+#             */
/*   Updated: 2025/07/22 19:16:35 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf_specifiers(ft_printf(const char *format, va_list args))
{
	size_t	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 's')
			
	}
}
