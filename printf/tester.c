/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MP9 <mikjimen@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:09:45 by MP9               #+#    #+#             */
/*   Updated: 2025/07/24 15:10:57 by MP9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

// int	main(void)
// {
// 	int		ret1, ret2;
// 	char	*str = "Hello, 42!";
// 	char	*nullstr = NULL;
// 	int		n = -42;
// 	unsigned int u = 4294967295U;
// 	void	*ptr = str;
// 	void	*null_ptr = NULL;

// 	printf("==== ft_printf vs printf tester ====\n\n");
// 	// %s
// 	ret1 = ft_printf("ft_printf: s: %s\n", str);
// 	ret2 = printf("printf   : s: %s\n", str);
// 	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
// 	// %s with NULL
// 	ret1 = ft_printf("ft_printf: null string: %s\n", nullstr);
// 	ret2 = printf("printf   : null string: %s\n", nullstr);
// 	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

// 	// %p
// 	ret1 = ft_printf("ft_printf: p: %p", ptr);
// 	ret2 = printf("printf   : p: %p", ptr);
// 	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

// 	// %p with NULL
// 	ret1 = ft_printf("ft_printf: null pointer: %p\n", "");
// 	ret2 = printf("printf   : null pointer: %p\n", "");
// 	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

// 	ret1 = ft_printf("ft_printf: random bshit:%pGiw;\r%swA|Q/N,X%cy9v%s'il%uHz'W&:GUU%p\tP D\f3H%d;\f\n", (void *)-11643967646766922, ".x%L]\"bLnJ\n)@Rt6rxHFU\n9LH", 588398736, "Cl;Ytk:[d13VZ8jYY`.$1$x8P", -1608373338, (void *)-233921788554454061, -1472867249);
// 	ret2 = printf("printf   : random bshit: %pGiw;\r%swA|Q/N,X%cy9v%s'il%uHz'W&:GUU%p\tP D\f3H%d;\f\n", (void *)-11643967646766922, ".x%L]\"bLnJ\n)@Rt6rxHFU\n9LH", 588398736, "Cl;Ytk:[d13VZ8jYY`.$1$x8P", -1608373338, (void *)-233921788554454061, -1472867249);
// 	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);
// }
