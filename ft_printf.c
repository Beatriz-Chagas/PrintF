/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 04:46:23 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/21 07:18:31 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_check(char format, va_list args)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (format == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start (args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += type_check(format[++i], args);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int len = -42;
// 	printf("%d %d %d", len, len, len);
// 	printf("\n");
// 	ft_printf("%d %d %d", len, len, len);
// 	return (0);
// }
