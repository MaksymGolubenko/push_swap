/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksymgolubenko <maksymgolubenko@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:50:03 by maksymgolub       #+#    #+#             */
/*   Updated: 2025/12/04 19:54:55 by maksymgolub      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	unsigned int	nb;
	int				count;

	nb = n;
	count = 0;
	if (nb >= 10)
		count += ft_putunsigned(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}
