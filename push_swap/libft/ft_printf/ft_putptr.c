/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:08:01 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/12/06 19:43:18 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_additional(unsigned long address)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (address >= 16)
		count += ft_putptr_additional(address / 16);
	count += ft_putchar(base[address % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				count;

	count = 0;
	address = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putptr_additional(address);
	return (count);
}

// int	ft_putptr(void *ptr)
// {
// 	unsigned long	address;
// 	int				count;

// 	count = 0;
// 	address = (unsigned long)ptr;
// 	count += ft_putstr("0x");
// 	if (!address)
// 		count += ft_putstr("0");
// 	else
// 		count += ft_putptr_additional(address);
// 	return (count);
// }
