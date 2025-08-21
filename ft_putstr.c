/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:08:01 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/21 06:41:41 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}
// int main(void)
// {
// 	int len;

// 	len = ft_putstr("Ola mundo");
// 	ft_putchar('\n');
// 	ft_putstr("Total impresso: ");
// 	ft_putnbr(len);
// 	ft_putchar('\n');
// 	return (0);
// }
