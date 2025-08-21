/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchagas- <bchagas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:07:57 by bchagas-          #+#    #+#             */
/*   Updated: 2025/08/20 20:56:48 by bchagas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	p;

	if (!ptr)
		return (ft_putstr("(nil)"));
	p = ft_putstr("0x") + ft_puthex((unsigned long)ptr, 0);
	return (p);
}
// int	main(void)
// {
// 	char *d = "f";
// 	ft_putptr(d);
// 	ft_putchar('\n');
// 	ft_putptr(&d);
// 	return (0);
// }
