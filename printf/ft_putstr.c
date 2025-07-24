/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:09:56 by MP9               #+#    #+#             */
/*   Updated: 2025/07/24 14:09:59 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		count;
	int		prot;

	count = 0;
	if (!str)
	{
		prot = write(1, "(null)", 6);
		if (prot == -1)
			return (-1);
		return (6);
	}
	while (str[count])
	{
		prot = write(1, &str[count], 1);
		if (prot == -1)
			return (-1);
		count++;
	}
	return (count);
}
