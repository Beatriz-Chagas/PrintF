/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:07:53 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/17 23:35:04 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	i;
	int				count;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		i = (unsigned int)(-n);
	}
	else
		i = (unsigned int)n;
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + '0');
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
