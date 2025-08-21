/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:07:53 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/21 07:17:48 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long n)
{
	unsigned long long	i;
	int					count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		i = (unsigned long long)(-n);
	}
	else
		i = (unsigned long long)n;
	if (i >= 10)
		count += ft_putnbr(i / 10);
	count += ft_putchar((i % 10) + '0');
	return (count);
}
// int main(void)
// {
// 	int len;

// 	len = ft_putnbr(-12345);
// 	ft_putchar('\n');
// 	ft_putstr("Total impresso: ");
// 	ft_putnbr(len);
// 	ft_putchar('\n');
// 	return (0);
// }
